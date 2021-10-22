#include "pch.h"
#include "D:/Лабы/AiSD_lab1.1/Header.h"


TEST(Polynom, MakePolynom) {
	EXPECT_THROW(Polynom test(-1), const char*);
	EXPECT_THROW(Polynom test(-100), const char*);
}

TEST(Polynom, SetInPolynom) {
	Polynom test(3);
	EXPECT_THROW(test.Set(1, 5), const char*);
	EXPECT_THROW(test.Set(1, -1), const char*);
	test.Set(2, 2);
	EXPECT_EQ(2, test[2]);
}

TEST(Polynom, IndexPolynom) {
	Polynom test(3);
	EXPECT_THROW(test[5], const char*);
	EXPECT_THROW(test[-1], const char*);
}

TEST(Polynom, OperatorPlus) {
	Polynom test1(1), test2(1);
	test1 = test1 + test2;
	EXPECT_EQ(2, test1[1]);
	EXPECT_EQ(2, test1[0]);
}

TEST(Polynom, OperatorMinus) {
	Polynom test1(2), test2(2);
	test1.Set(2, 2);
	test1.Set(2, 1);
	test1.Set(2, 0);
	test1 = test1 - test2;
	EXPECT_EQ(1, test1[2]);
	EXPECT_EQ(1, test1[1]);
	EXPECT_EQ(1, test1[0]);
}

TEST(Polynom, OperatorMultiplication) {
	Polynom test(2);
	test = test * 2;
	EXPECT_EQ(2, test[2]);
	EXPECT_EQ(2, test[1]);
	EXPECT_EQ(2, test[0]);
}

TEST(Polynom, Result) {
	Polynom test(1);
	EXPECT_EQ(3, test.Result(2));
}

