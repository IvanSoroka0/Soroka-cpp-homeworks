#include <iostream>
#include <string>
#include <algorithm>

bool Pal(int x) {
    // Преобразуем число в строку для удобства работы с цифрами
    std::string str = std::to_string(x);
    
    // Создаем копию строки и переворачиваем ее
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    
    // Сравниваем оригинальную строку с перевернутой
    // Если они равны, число - палиндром
    return str == reversed;
}

int main() {
    
    int x;
    std::cout << "Введите целое число: ";
    std::cin >> x;
    
    // std::boolalpha выводит true/false вместо 1/0
    std::cout << std::boolalpha << Pal(x) << std::endl;
    
    return 0;
}
