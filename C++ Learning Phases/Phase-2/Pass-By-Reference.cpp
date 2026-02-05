#include <iostream>

//Pass-by-value: the grade doesnt actually change outside the function
void fakeBoost (double grade) {
  grade += 5.0;
}

void realBoost (double &grade) {
  grade += 5.0;
}

int main() {
  double myGrade = 75.0;

  fakeBoost(myGrade);
  std::cout << "My grade after fake boost: " << myGrade << "\n";

  realBoost(myGrade);
  std::cout << "My grade after real boost: " << myGrade << "\n";
}
