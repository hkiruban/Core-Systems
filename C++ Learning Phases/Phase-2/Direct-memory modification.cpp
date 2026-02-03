#include <ostream>

void applyBaneCurve(int &grade) {
    grade += 5; // Direct modification of the original memory
}

int main(){
    int ActualGrade = 95;

    applyBaneCurve(ActualGrade);

    std::cout << "Final Grade: " << ActualGrade << std::endl;

    return 0;
}
