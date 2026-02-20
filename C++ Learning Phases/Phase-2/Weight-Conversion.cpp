#include <iostream>

// Overload 1: Int input (Grams to KG)
double convertWeight(int grams) {
    return grams / 1000.0;
}

// Overload 2: Double input (Lbs to KG)
double convertWeight(double lbs) {
    // Use the precise constant. 
    // Also, (1/2.2) is a calculation the CPU has to do every time. 
    // Using a constant is faster.
    return lbs * 0.453592; 
}

int main() {
    double myWeightLbs = 700.3; 
    int dinnerGrams = 5000;

    std::cout << "Dinner (KG): " << convertWeight(dinnerGrams) << std::endl;
    std::cout << "Bodyweight (KG): " << convertWeight(myWeightLbs) << std::endl;
   
    return 0;
}
