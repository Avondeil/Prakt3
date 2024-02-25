
#include <iostream>
#include <cmath>
const double pi = 3.14159265358979323846;

double calculate(double a) {
    double numerator = (sin(2 * a) + sin(5 * a) - sin(3 * a));
    double denominator = cos(a) + 1 - 2 * sin(3 * a - pi);
    return numerator / denominator;
}

//6 вариант, 3 задание
int main() {
    setlocale(LC_ALL, "RU");
    double a;
    std::cout << "Введите значение a: ";
    std::cin >> a;
    double result = calculate(a);
    std::cout << "y = " << result << std::endl;
    return 0;
}



