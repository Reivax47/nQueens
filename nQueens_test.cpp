#include <gtest/gtest.h>
#include "nqueens.h"

TEST(NQueensTest, CasDeBase) {
    EXPECT_EQ(nQueens(1), 1);
    EXPECT_EQ(nQueens(0), 0);
    EXPECT_EQ(nQueens(-1), 0);
}

TEST(NQueensTest, PetitsEchiquiers) {
    EXPECT_EQ(nQueens(2), 0);
    EXPECT_EQ(nQueens(3), 0);
    EXPECT_EQ(nQueens(4), 2);
}

TEST(NQueensTest, EchiquiersStandards) {
    EXPECT_EQ(nQueens(5), 10);
    EXPECT_EQ(nQueens(6), 4);
    EXPECT_EQ(nQueens(7), 40);
    EXPECT_EQ(nQueens(8), 92);
}