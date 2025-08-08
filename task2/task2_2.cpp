#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::cout << "Введите слово:\n";
    std::string str = "";
    std::cin >> str;
    std::cout << "Ваше слово:\n" << str;
}