#include "OS_colloquium_1.h"

int main()
{
	try {
		std::cout << "Enter container size(from 1 to 94): ";
		int containerSize;
		containerSize = readNumber(1, 94);
		std::cout << "\n";

		std::vector<unsigned long long> Fibonacci = firstFibonacciNumbers(containerSize);

		std::cout << "The first " << containerSize << " Fibonacci numbers:\n";
		for (auto& el : Fibonacci) {
			std::cout << el << " ";
		}

		std::cout << "\n\n";
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << "\n\n";
	}

	try {
		std::cout << "Enter number: ";
		std::string num;
		std::cin >> num;
		std::cout << "\n";

		bool isPalindrome = isNumPalindrome(num);

		if (isPalindrome) {
			std::cout << "The number " << num << " is a palindrome";
		}
		else {
			std::cout << "The number " << num << " is not a palindrome";
		}
		std::cout << "\n\n";
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << "\n\n";
	}

	try {
		std::cout << "Enter list size(from 1 to 100): ";
		int size = readNumber(1, 100);

		List list;
		std::cout << "Enter " << size << " integer elements(from -1000000 to 1000000):\n";

		for (int i = 0; i < size; ++i) {
			int value = readNumber(-1000000, 1000000);
			list.pushBack(value);
		}

		std::cout << "\nOriginal list:\n";
		list.print();

		list.reverse();

		std::cout << "\nReversed list:\n";
		list.print();
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << "\n\n";
	}
}
