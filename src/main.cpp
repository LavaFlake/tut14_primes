#include <iostream>
// The quiz for this lesson is to find primse using if statements.
// There must be a better test than this
// Please forgive me for what I am about to type

bool checkPrime(int n) {
	if (n == 2)
		return true;
	if (n == 3)
		return true;
	if (n == 5)
		return true;
	if (n == 7)
		return true;

	return false;
}

int main() {
	std::cout << "Give me a number < 10 and I'll check if it's prime: ";

	int a;
	std::cin >> a;

	if (checkPrime(a))
		std::cout << "The digit is prime" << std::endl;
	else
		std::cout << "The digit is not prime" << std::endl;

	return 0;
}
