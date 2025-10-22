#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  //Вариант 1
    const int ROWS = 2;
    const int COLS = 2;
    int matrix[ROWS][COLS];
    
    //генератор случайных чисел
    srand(time(0));
    
    // Заполнение массива случайными числами от 1 до 10
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = rand() % 10 + 1;
        }
    }
    
    // Вывод всей матрицы
    cout << "Элементы массива:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Вывод элементов главной диагонали
    cout << "Элементы главной диагонали: ";
    for (int i = 0; i < ROWS; i++) {
        cout << matrix[i][i];
        if (i < ROWS - 1) {
            cout << ", ";
        }
    }
    cout << endl;

}
