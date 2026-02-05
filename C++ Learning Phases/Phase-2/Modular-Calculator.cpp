#include <iostream>

//Overload for precision (Risk Model/GPA)
void process(double &total, double value) {
  total += value;
}

//Overloaded for discrete counts (Assets/Logisitics)
void process(int &total, int value) {
  total += value;
}

//Functions output
void display(std::ostream &os, double result) {
  os << "Current Calculation: " << result << std::endl;
}

int main() {
  double gpaTotal = 0.0;

  //Execution
  process(gpaTotal, 95.5);
  process(gpaTotal, 88.0);

  display(std::cout, gpaTotal);

  return 0;
}
