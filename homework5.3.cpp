#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    int summ = 0;
    //Вариант 1
    // Запрос числа
    cout << "Введите число: ";
    cin >> N;
    
  
    // Вычисление суммы
    for (int i = 1; i <= N; i++) {
        summ += i;
    }
    
    // Вывод результата
    cout << "Сумма всех чисел от 1 до " << N << " равна: " << summ << endl;
  
}
