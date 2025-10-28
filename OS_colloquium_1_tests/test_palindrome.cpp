#include <gtest/gtest.h>
#include "OS_colloquium_1.h"

TEST(PalindromeTest, Palindromes) {
	EXPECT_TRUE(isNumPalindrome("123321"));
	EXPECT_TRUE(isNumPalindrome("11111111111111111111111"));
	EXPECT_TRUE(isNumPalindrome("0"));
	EXPECT_TRUE(isNumPalindrome("1234567890987654321"));
}

TEST(PalindromeTest, NotPalindromes) {
	EXPECT_FALSE(isNumPalindrome("123456"));
	EXPECT_FALSE(isNumPalindrome("12111111111111111111111"));
	EXPECT_FALSE(isNumPalindrome("022222221"));
	EXPECT_FALSE(isNumPalindrome("01"));
}

TEST(PalindromeTest, ThrowOnInvalidInput) {
	EXPECT_THROW(isNumPalindrome("abc"), std::invalid_argument);
	EXPECT_THROW(isNumPalindrome("11111w11111"), std::invalid_argument);
	EXPECT_THROW(isNumPalindrome("!"), std::invalid_argument);
	EXPECT_THROW(isNumPalindrome("123456789o987654321"), std::invalid_argument);
}