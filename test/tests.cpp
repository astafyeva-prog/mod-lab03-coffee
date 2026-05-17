// Copyright 2026 Anastasia Astafeva

#include <gtest/gtest.h>
#include "Automata.h"

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
