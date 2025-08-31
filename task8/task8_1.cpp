#include <iostream>

void print(int value) {
    std::cout << "Количество вызовов функции counting_function(): " << value << '\n';
}

void counting_function() {
    static int counter = 0;
    counter++;

    print(counter);
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "RU");

    for (int i = 0; i < 15; i++)
    {
        counting_function();
    }
}
