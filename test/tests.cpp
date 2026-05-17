#include "../include/Automata.h"
#include <gtest/gtest.h>

TEST(AutomataTest, OnState) {
    Automata a;

    a.on();

    EXPECT_EQ(a.getState(), WAIT);
}

TEST(AutomataTest, CoinState) {
    Automata a;

    a.on();

    a.coin(50);

    EXPECT_EQ(a.getState(), ACCEPT);
}

TEST(AutomataTest, CancelState) {
    Automata a;

    a.on();

    a.coin(50);

    a.cancel();

    EXPECT_EQ(a.getState(), WAIT);
}
