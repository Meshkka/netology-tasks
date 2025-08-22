#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int arr[] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };
    
    std::cout << "Массив до сортировки:";
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        std::cout << ' ' << arr[i];
    }

    for (int i = (sizeof(arr) / sizeof(int) - 1); i >= 0; i--) {
        for (int j = (sizeof(arr) / sizeof(int) - 2); j >= 0; j--) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    std::cout << "\nМассив после сортировки:";
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        std::cout << ' ' << arr[i];
    }
}