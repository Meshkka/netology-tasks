#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите слово, которое надо угадать: ";
    std::string word1 = "", word2 = "";
    std::cin >> word1;

    bool flag = true;
    while (flag) {
        std::cout << "Угадайте слово: ";
        std::cin >> word2;
        
        if (word1 == word2) {
            std::cout << "Правильно! Вы победили! Загаданное слово — " + word1;
            flag = false;
        }
        else {
            std::cout << "Неправильно\n";
        }
    }
}