#include <iostream>
using namespace std;
//Вариант 1
class Student {
    string n; int a; double s;
public:
    Student(string n, int a, double s) : n(n), a(a), s(s) {}
    void show() {
        cout << "Имя: " << n << "\nВозраст: " << a 
             << "\nСредний балл: " << s 
             << "\nСовершеннолетний: " << (a >= 18 ? "да" : "нет") << endl;
    }
    void updateScore(double delta) {
        s += delta;
    }
};

int main() {
    Student s1("Артем", 23, 4.3);
    s1.updateScore(0.4);
    s1.show();
    
}
