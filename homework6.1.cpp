#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
  //Вариант 1
    const int SIZE = 5;  // размер массива
    int arr[SIZE];       // объявление массива
    int summ = 0;         // переменная для суммы
    
    //генератор случайных чисел
    srand(time(0));
    
    // Заполнение массива 
    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;  
        cout << arr[i];
        if (i < SIZE - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    
    // Вычисление суммы элементов массива
    for (int i = 0; i < SIZE; i++) {
        summ += arr[i];
    }
    

    cout << "Сумма всех элементов массива: " << summ << endl;

}
