#include <gtest/gtest.h>
#include "OS_colloquium_1.h"

TEST(ListTest, SimpleTest) {
	List list;
	list.pushBack(1);
	list.pushBack(2);
	list.pushBack(3);
	list.pushBack(4);
	list.pushBack(5);
	list.reverse();

	List expected;
	expected.pushBack(5);
	expected.pushBack(4);
	expected.pushBack(3);
	expected.pushBack(2);
	expected.pushBack(1);

	EXPECT_EQ(list, expected);
}

TEST(ListTest, EmptyList) {
	List list;

	List expected;

	EXPECT_EQ(list, expected);
}

TEST(ListTest, PalindromList) {
	List list;
	list.pushBack(1);
	list.pushBack(2);
	list.pushBack(3);
	list.pushBack(2);
	list.pushBack(1);
	list.reverse();

	List expected;
	expected.pushBack(1);
	expected.pushBack(2);
	expected.pushBack(3);
	expected.pushBack(2);
	expected.pushBack(1);

	EXPECT_EQ(list, expected);
}