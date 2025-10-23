#include "palindrom.h"

bool isNumPalindrom(unsigned long long num) {
    std::string strNumber = std::to_string(num);

    std::string strClone = strNumber;
    std::reverse(strClone.begin(), strClone.end());

    return (strNumber == strClone);
}
