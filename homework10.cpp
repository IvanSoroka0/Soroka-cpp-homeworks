#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Ввод размера массива
    cout << "Введите количество чисел: ";
    cin >> n;
    
    // Создаем массив
    int nums[n];
    
    // Ввод чисел в массив
    cout << "Введите числа: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    // Ввод целевой суммы
    int target;
    cout << "Введите искомую сумму: ";
    cin >> target;
    
    // Поиск пары чисел
    int index1 = -1, index2 = -1;
    
    // Простой перебор всех пар
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                index1 = i;
                index2 = j;
                break;  // Нашли - выходим из внутреннего цикла
            }
        }
        if (index1 != -1) break;  // Нашли - выходим из внешнего цикла
    }
    
    // Вывод результата
    cout << "Выходные данные: " << index1 << " и " << index2 << endl;

    
    return 0;
}
