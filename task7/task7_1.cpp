#include <iostream>

int main()
{
    int a = 0;
    short b = 0;
    long c = 0;
    long long d = 0;
    float e = 0;
    double f = 0;
    long double g = 0;
    bool h = 0;

    std::cout << "int: " << &a << ' ' << sizeof(a) << '\n';
    std::cout << "short: " << &b << ' ' << sizeof(b) << '\n';
    std::cout << "long: " << &c << ' ' << sizeof(c) << '\n';
    std::cout << "long long: " << &d << ' ' << sizeof(d) << '\n';
    std::cout << "float: " << &e << ' ' << sizeof(e) << '\n';
    std::cout << "double: " << &f << ' ' << sizeof(f) << '\n';
    std::cout << "long double: " << &g << ' ' << sizeof(g) << '\n';
    std::cout << "bool: " << &h << ' ' << sizeof(h);
}