#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    // Создаем массив для значений
    int values[256] = {0}; // 256 - размер таблицы ASCII
    
    // Заполняем значения римских цифр
    values['I'] = 1;
    values['V'] = 5;
    values['X'] = 10;
    values['L'] = 50;
    values['C'] = 100;
    values['D'] = 500;
    values['M'] = 1000;
    
    int result = 0;
    int n = s.length();
    
    for (int i = 0; i < n; i++) {
        // Если есть следующий символ и он больше текущего
        if (i < n - 1 && values[s[i]] < values[s[i + 1]]) {
            result -= values[s[i]];  // Вычитаем
        } else {
            result += values[s[i]];  // Прибавляем
        }
    }
    
    return result;
}

int main() {
    string roman;
    
    cout << "Введите римское число: ";
    cin >> roman;
    
    int number = romanToInt(roman);
    
    cout << "Арабское число: " << number << endl;
    
    return 0;
}
