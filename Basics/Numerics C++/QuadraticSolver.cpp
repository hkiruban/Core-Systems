#include <iostream>
#include <cmath>

int main() {
    double a, b, c, disc, x1, x2, realPart, imagPart;

    std::cout << "=== QUADRATIC SOLVER INITIALIZED ===" << std::endl;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;
    std::cout << "Enter c: ";
    std::cin >> c;

    if (a == 0) {
        std::cout << "Error: 'a' cannot be zero." << std::endl;
        return 1;
    }

    disc = (b * b) - (4.0 * a * c);

    if (disc > 0) {
        x1 = (-b + std::sqrt(disc)) / (2 * a);
        x2 = (-b - std::sqrt(disc)) / (2 * a);
        std::cout << "Roots: " << x1 << ", " << x2 << std::endl;
    } else if (disc == 0) {
        x1 = -b / (2 * a);
        std::cout << "Root: " << x1 << std::endl;
    } else {
        realPart = -b / (2 * a);
        imagPart = std::sqrt(-disc) / (2 * a);
        std::cout << "Complex Roots: " << realPart << " ± " << imagPart << "i" << std::endl;
    }

    return 0;
}
