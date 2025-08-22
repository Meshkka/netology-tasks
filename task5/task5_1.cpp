#include <iostream>

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 0; i < 10; i++) {
        std::cout << arr[i];
        if (i != 9) { std::cout << ", "; }
    }
}