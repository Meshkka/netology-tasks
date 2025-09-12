#include <iostream>

double* create_array(int size) {
    double* arr = new double[size];

    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }

    return arr;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;

    double* arr_ptr = create_array(size);
    std::cout << "Массив:";

    for (int i = 0; i < size; i++) {
        std::cout << ' ' << arr_ptr[i];
    }

    delete[] arr_ptr;
}
