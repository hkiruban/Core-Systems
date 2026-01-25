#include <iostream>

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main() {
    int a = 100;
    int b = 500;

    std::cout << "Before: a = " << a << ", b = " << b << std::endl;

    // We pass the ADDRESS of a and b using &
    swap(&a, &b);

    std::cout << "After:  a = " << a << ", b = " << b << std::endl;

    return 0;
}
