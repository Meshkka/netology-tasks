#include <iostream>

int** create_two_dim_array(int row, int col) {
    int** arr = new int* [row];

    for (int i = 0; i < row; i++) {
        arr[i] = new int[col];
    }

    return arr;
}

void fill_two_dim_array(int** arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            arr[i][j] = (i+1) * (j+1);
        }
    }
}

void print_two_dim_array(int** arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            std::cout << arr[i][j] << '\t';
        }
        std::cout << '\n';
    }
}

void delete_two_dim_array(int** arr, int row, int col) {
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }
    
    delete[] arr;
}

int main()
{
    setlocale(LC_ALL, "RU");

    int row = 0, col = 0;
    std::cout << "Введите количество строк: ";
    std::cin >> row;
    std::cout << "Введите количество столбцов: ";
    std::cin >> col;

    int** arr_ptr = create_two_dim_array(row, col);
    fill_two_dim_array(arr_ptr, row, col);

    std::cout << "Таблица умножения:\n";

    print_two_dim_array(arr_ptr, row, col);
    delete_two_dim_array(arr_ptr, row, col);
}