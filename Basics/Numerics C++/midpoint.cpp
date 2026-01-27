#include <iostream>

/**
 * Calculates the midpoint to avoid potential overflow 
 * common in the standard (a+b)/2 approach.
 */
double calculate_safe_average(double a, double b) {
    return a + (b - a) / 2.0;
}

int main() {
    double val1 = 10.5;
    double val2 = 20.5;
    
    std::cout << "Midpoint Analysis: " << calculate_safe_average(val1, val2) << std::endl;
    
    return 0;
}
