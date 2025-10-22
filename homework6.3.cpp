#include <iostream>
#include <string> 

using namespace std;

int main() {
    string SString;
      //Вариант 1
    // Запрос строки
    cout << "Введите строку: ";
    cin >> SString;
    
    // Вывод длины строки
    cout << "Длина введенной строки: " << SString.length() << " символов" << endl;

}
