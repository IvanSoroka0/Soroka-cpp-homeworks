#include <iostream>
#include <string>


using namespace std;

int main() {
      //Вариант 1
    int year;
    
    // Проверка високосного года
    bool vis = false;
    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                vis = true;
            }
        } else {
            vis = true;
        }
    }
    
    // Вывод результата
    if (vis == true) {
        cout << year << " год является високосным." << endl;
    } else {
        cout << year << " год не является високосным." << endl;
    }
      
}
