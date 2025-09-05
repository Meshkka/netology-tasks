#include <iostream>

void print(int *arr, int size) {
    if (size > 0) {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << ' ';
        }

        std::cout << '\n';
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 4, 6};
    int arr3[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};

    print(arr1, (sizeof(arr1) / sizeof(int)));
    print(arr2, (sizeof(arr2) / sizeof(int)));
    print(arr3, (sizeof(arr3) / sizeof(int)));
}