#include "utils.h"

int readNumber(int lowerBound, int upperBound) {
	int num;
	std::cin >> num;

	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		throw std::invalid_argument("Invalid input, variable must be a number");
	}

	if (num < lowerBound) {
		throw std::out_of_range("Invalid input, the number must be greater than or equal to " + std::to_string(lowerBound));
	}

	if (num > upperBound) {
		throw std::out_of_range("Invalid input, the number must be less than or equal to " + std::to_string(upperBound));
	}

	return num;
}

bool isNum(std::string str) {
	std::regex reg("-?\\d+");
	return std::regex_match(str, reg);
}