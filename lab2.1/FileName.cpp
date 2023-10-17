// <Siliava Oleksandr>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 26









#include <iostream>
#include <cmath>

int main() {
    double a;

    // Введення значення a від користувача
    std::cout << "Введіть значення a: ";
    std::cin >> a;

    // Обчислення змінних z1 і z2 за заданими формулами
    double z1 = cos(a) + cos(2 * a) + cos(6 * a) + cos(7 * a);
    double z2 = 4 * cos(a / 2) * cos(5 * a / 2) * cos(4 * a);

    // Виведення результатів на екран
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    

    return 0;
}
