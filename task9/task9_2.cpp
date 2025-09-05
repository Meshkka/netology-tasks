#include <iostream>

void swap(int* a, int* b) {
    if (a != b) {
        *a ^= *b;
        *b ^= *a;
        *a ^= *b;
    }
}

void printab(int& a, int& b) {
    std::cout << "a = " << a << ", b = " << b << '\n';
}

int main()
{
    int a = 5, b = 8;

    printab(a, b);
    swap(&a, &b);
    printab(a, b);
}