#include <iostream>
#include <string>
#include <Windows.h>

std::string ValueToString(int value) {
    std::string str = "";

    if (value < 0) { 
        value *= -1;
        str += "минус ";
    }
    
    int tens = value / 10;
    int ones = value % 10;

    bool flag = true;

    if (tens > 0) {
        if (value < 20) {
            flag = false;
            switch (value) {
            case 10:
                str += "десять";
                break;
            case 11:
                str += "одиннадцать";
                break;
            case 12:
                str += "двенадцать";
                break;
            case 13:
                str += "тринадцать";
                break;
            case 14:
                str += "четырнадцать";
                break;
            case 15:
                str += "пятнадцать";
                break;
            case 16:
                str += "шестнадцать";
                break;
            case 17:
                str += "семнадцать";
                break;
            case 18:
                str += "восемнадцать";
                break;
            case 19:
                str += "девятнадцать";
                break;
            }
        } else {
            switch (tens) {
            case 2:
                str += "двадцать";
                break;
            case 3:
                str += "тридцать";
                break;
            case 4:
                str += "сорок";
                break;
            case 5:
                str += "пятьдесят";
                break;
            case 6:
                str += "шестьдесят";
                break;
            case 7:
                str += "семьдесят";
                break;
            case 8:
                str += "восемьдесят";
                break;
            case 9:
                str += "девяносто";
                break;
            }
            if (ones == 0) { 
                flag = false; 
            }
            else {
                str += " ";
            }
        }
    }

    if (flag == true) {
        switch (ones) {
        case 0:
            str += "ноль";
            break;
        case 1:
            str += "один";
            break;
        case 2:
            str += "два";
            break;
        case 3:
            str += "три";
            break;
        case 4:
            str += "четыре";
            break;
        case 5:
            str += "пять";
            break;
        case 6:
            str += "шесть";
            break;
        case 7:
            str += "семь";
            break;
        case 8:
            str += "восемь";
            break;
        case 9:
            str += "девять";
            break;
        }
    }

    return str;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int firstValue = 0, secondValue = 0;
    std::cout << "Введите целое число: ";
    std::cin >> firstValue;
    std::cout << "Введите целое число: ";
    std::cin >> secondValue;

    if (((firstValue > 99) || (firstValue < -99)) || ((secondValue > 99) || (secondValue < -99))) {
        std::cout << "Ошибка! Хотя бы одно из чисел вне диапазона!";
    }
    else {
        std::cout << ValueToString(firstValue);
        if (firstValue == secondValue) {
            std::cout << " равно ";
        }
        else if (firstValue < secondValue) {
            std::cout << " меньше чем ";
        }
        else {
            std::cout << " больше чем ";
        }
        std::cout << ValueToString(secondValue);
    }
}