#include "fibonacci.h"

std::vector<unsigned long long> firstFibonacciNumbers(int n) {
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