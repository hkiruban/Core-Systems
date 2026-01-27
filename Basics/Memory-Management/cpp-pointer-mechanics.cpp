#include <iostream> // The header for printing

int main() { // The entry point for the program
    int a = 10;
    int b = 20;

    int* ptrA = &a;
    int* ptrB = &b;

    // The swap logic
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    // Verify the mission was successful
    std::cout << "a: " << a << " b: " << b << std::endl;

    return 0; // Signals the program finished successfully
}
