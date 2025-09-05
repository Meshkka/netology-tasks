#include <iostream>

void swap(int& a, int& b) {
    if (a != b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
}

void reverse_array(int *arr, int size) {
    for (int i = 0; i < (size / 2); i++) {
        swap(arr[i], arr[size - 1 - i]);
    }
}

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
}

int main()
{
    setlocale(LC_ALL, "RU");
    
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    std::cout << "До функции reverse: ";
    print_array(arr, (sizeof(arr) / sizeof(int)));

    reverse_array(arr, (sizeof(arr) / sizeof(int)));

    std::cout << "\nПосле функции reverse: ";
    print_array(arr, (sizeof(arr) / sizeof(int)));
}