#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    
    int minArr = arr[0];
    int maxArr = arr[0];

    std::cout << "Массив:";
    for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
        std::cout << ' ' << arr[i];
    }
    
    for (int i = 1; i < sizeof(arr)/sizeof(int); i++) {
        if (minArr > arr[i]) { minArr = arr[i]; }
        if (maxArr < arr[i]) { maxArr = arr[i]; }
    }

    std::cout << '\n' << "Минимальный элемент: " << minArr;
    std::cout << '\n' << "Максимальный элемент: " << maxArr;
}