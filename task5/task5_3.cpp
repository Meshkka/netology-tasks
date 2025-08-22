#include <iostream>

int main()
{
    setlocale(LC_ALL, "RU");

    std::cout << "Массив: \n";
    int arr[3][6] = { {1, 2, 3, 4 ,5 ,6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18} };

    int minArr = **arr, maxArr = **arr;
    int min1 = 0, min2 = 0, max1 = 0, max2 = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            if (minArr > arr[i][j]) { 
                minArr = arr[i][j];
                min1 = i, min2 = j;
            }
            if (maxArr < arr[i][j]) {
                maxArr = arr[i][j];
                max1 = i, max2 = j;
            }
            std::cout << arr[i][j] << "\t";
        }
        std::cout << '\n';
    }

    std::cout << "Индекс минимального элемента: " << min1 << ' ' << min2 << '\n';
    std::cout << "Индекс максимального элемента: " << max1 << ' ' << max2;
}