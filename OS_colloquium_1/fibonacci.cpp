#include "fibonacci.h"

std::vector<unsigned long long> firstFibonacciNumbers(int n) {
	if (n < 0 || n > 94) {
		throw std::invalid_argument("Invalid input, the number must be between 0 and 49");
	}

	std::vector<unsigned long long> Fibonacci(n);

	if (n > 0) {
		Fibonacci[0] = 0;
	}

	if (n > 1) {
		Fibonacci[1] = 1;
	}

	for (int i = 2; i < n; i++) {
		Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2];
	}

	return Fibonacci;
}