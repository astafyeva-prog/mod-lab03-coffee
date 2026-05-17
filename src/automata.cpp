#include "../include/Automata.h"

Automata::Automata() {
    cash = 0;

    menu = {"Tea", "Coffee", "Milk"};

    prices = {50, 100, 70};

    state = OFF;
}

void Automata::on() {
    if (state == OFF) {
        state = WAIT;
        cout << "Automata ON\n";
    }
}

void Automata::off() {
    state = OFF;
    cout << "Automata OFF\n";
}

void Automata::coin(int value) {
    if (state == WAIT || state == ACCEPT) {
        cash += value;
        state = ACCEPT;

        cout << "Balance: " << cash << endl;
    }
}

void Automata::getMenu() {
    cout << "MENU:\n";

    for (int i = 0; i < menu.size(); i++) {
        cout << i << ". "
             << menu[i]
             << " - "
             << prices[i]
             << endl;
    }
}

STATES Automata::getState() {
    return state;
}

bool Automata::check(int index) {
    state = CHECK;

    if (cash >= prices[index]) {
        return true;
    }

    return false;
}

void Automata::choice(int index) {
    if (check(index)) {

        cash -= prices[index];

        cook(menu[index]);

        finish();
    }
    else {
        cout << "Not enough money\n";
    }
}

void Automata::cancel() {
    cout << "Returned: " << cash << endl;

    cash = 0;

    state = WAIT;
}

void Automata::cook(string drink) {
    state = COOK;

    cout << "Cooking " << drink << "...\n";
}

void Automata::finish() {
    cout << "Drink ready\n";

    state = WAIT;
}
