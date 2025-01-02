#include <iostream>
#include "calculations.hpp"

void add(double a, double b) {
	double result = a + b;
	std::cout << result << "\n";
}

void subtract(double a, double b) {
	double result = a - b;
	std::cout << result << "\n";
}

void multiply(double a, double b) {
	double result = a * b;
	std::cout << result << "\n";
}

void divide(double a, double b) {
	if (b == 0) {
		std::cout << "Division by 0 not allowed!" << "\n";
	} else {
		// Divide by 0 will give an output of 'inf' so no need to check 'b==0' condition
		double result = a / b;
		std::cout << result << "\n";
		
	}

}
