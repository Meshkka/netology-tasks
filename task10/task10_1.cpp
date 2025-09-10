#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    std::cout << "Введите размер массива: ";
    int size;
    std::cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "arr[" << i << "] = ";
        std::cin >> arr[i];
    }

    std::cout << "Введённый массив:";
    for (int i = 0; i < size; i++) {
        std::cout << ' ' << arr[i];
    }

    delete[] arr;
}