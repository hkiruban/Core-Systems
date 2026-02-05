#incude <iostream>
#include <iomanip>

//Handling Discrete Units
int solve(int a, int b) {
  std::cout << "Executing Integer Logic..." << std;;endl;
  return a + b;
}

//Handling precision data
double solve(double a, double b) {
  std::cout << "Executing Double Precision Logic" << std::endl;
  return a + b;
}

int main() {
  //The compiler differentiates based on the arguement types
  int assets = solve(10,20);
  double risk = solve(10.5, 20.75);

  // '<<' is the insertion operator, it pushes data from the right side to its left
  std::cout << "Assets: " << assets << "\nRisk: " << risk << std::endl
  return 0;
}
