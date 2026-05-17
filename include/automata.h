#ifndef AUTOMATA_H
#define AUTOMATA_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum STATES {
    OFF,
    WAIT,
    ACCEPT,
    CHECK,
    COOK
};

class Automata {
private:
    int cash;
    vector<string> menu;
    vector<int> prices;
    STATES state;

public:
    Automata();

    void on();
    void off();

    void coin(int value);

    void getMenu();

    STATES getState();

    void choice(int index);

    bool check(int index);

    void cancel();

    void cook(string drink);

    void finish();
};

#endif
