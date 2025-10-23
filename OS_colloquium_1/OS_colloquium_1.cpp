#include "OS_colloquium_1.h"

using namespace std;

int main()
{
	int n;
	std::cin >> n;
	std::vector<unsigned long long> Fibonacci = firstFibonacciNumbers(n);

	for (auto& el : Fibonacci) {
		std::cout << el << " ";
	}

	std::cout << "\n\n";

	unsigned long long num;

	std::cin >> num;

	bool palindrom = isNumPalindrom(num);

	if (palindrom) {
		std::cout << "The number is a palindrome";
	}
	else {
		std::cout << "The number is not a palindrome";
	}
}
