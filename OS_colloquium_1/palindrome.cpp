#include "palindrome.h"

bool isNumPalindrome(std::string num) {

    if (!isNum(num)) {
        throw std::invalid_argument("Invalid input, variable must be a number");
    }

    std::string clone = num;
    std::reverse(clone.begin(), clone.end());

    return (clone == num);
}
