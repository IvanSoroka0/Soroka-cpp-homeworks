#include <iostream>
#include <string>
using namespace std;
//Вариант 1
int main() {
    string s; 
    cin >> s; 
    

    while (s.find("()") + s.find("[]") + s.find("{}") != -3) {
        size_t p;  // Переменная для хранения позиции найденной пары
        
        // Ищем и удаляем пару круглых скобок "()"


        if ((p = s.find("()")) + 1) {
            s.erase(p, 2);  // Удаляем 2 символа, начиная с позиции p
        }
        
        // Ищем и удаляем пару квадратных скобок "[]"
        if ((p = s.find("[]")) + 1) {
            s.erase(p, 2);
        }
        
        // Ищем и удаляем пару фигурных скобок "{}"
        if ((p = s.find("{}")) + 1) {
            s.erase(p, 2);
        }
    }
    
 
    cout << (s.empty() ? "true" : "false");

}
