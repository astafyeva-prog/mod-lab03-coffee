#include "../include/Automata.h"
#include <cassert>

int main() {

    Automata a;

    a.on();
    assert(a.getState() == WAIT);

    a.coin(50);
    assert(a.getState() == ACCEPT);

    assert(a.check(0) == true);

    a.choice(0);
    assert(a.getState() == WAIT);

    a.coin(20);
    assert(a.check(1) == false);

    a.cancel();
    assert(a.getState() == WAIT);

    a.off();
    assert(a.getState() == OFF);

    return 0;
}
