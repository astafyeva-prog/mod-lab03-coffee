// Copyright 2026 Anastasia Astafeva

#ifndef INCLUDE_AUTOMATA_H_
#define INCLUDE_AUTOMATA_H_

#include <string>
#include <vector>

enum STATES {
  OFF,
  WAIT,
  ACCEPT,
  CHECK,
  COOK
};

class Automata {
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
  void cook(std::string drink);
  void finish();

 private:
  int cash;
  std::vector<std::string> menu;
  std::vector<int> prices;
  STATES state;
};

#endif  // INCLUDE_AUTOMATA_H_
