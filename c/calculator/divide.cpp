#include <iostream>

void divide(double a, double b) {
    if (b == 0) {
        std::cout << "Division by 0 not allowed!" << "\n";
    } else {
        double result = a / b;
        std::cout << result << "\n";
    }
}
