#include <iostream>
#include <string>

int StringToValue(char s) {
    switch (s) {
    case '0':
        return 0;
        break;
    case '1':
        return 1;
        break;
    case '2':
        return 2;
        break;
    case '3':
        return 3;
        break;
    case '4':
        return 4;
        break;
    case '5':
        return 5;
        break;
    case '6':
        return 6;
        break;
    case '7':
        return 7;
        break;
    case '8':
        return 8;
        break;
    case '9':
        return 9;
        break;
    }
    return 0;
}

int main()
{
    setlocale(LC_ALL, "RU");

    std::string str = "";

    std::cout << "Введите целое число:\n";
    std::cin >> str;

    int str_size = 0;
    while (str[str_size++]) {}
    str_size--;

    int sum = 0;
    for (int i = 0; i < str_size; i++) {
        sum += StringToValue(str[i]);
    }

    std::cout << "Сумма цифр: " << sum;
}