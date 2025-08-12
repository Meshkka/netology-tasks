#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a = 0, b = 0, c = 0;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "Введите третье число: ";
    std::cin >> c;

    if (a < b) {
        int temp = b;
        b = a;
        a = temp;
    }
    if (b < c) {
        int temp = c;
        c = b;
        b = temp;
    }
    if (a < b) {
        int temp = b;
        b = a;
        a = temp;
    }
    
    std::cout << "Результат: " << a << ' ' << b << ' ' << c;
}