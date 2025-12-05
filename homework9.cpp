#include <iostream>

// Вариант 1
// Объявление функции
int sumOfThree(int a, int b, int c);

int main() {
    int num1, num2, num3;
    
    std::cout << "Введите 3 числа: ";
    std::cin >> num1;
   
    std::cin >> num2;

    std::cin >> num3;
    
    // Вызов функции и сохранение результата
    int result = sumOfThree(num1, num2, num3);
    
    // Вывод результата
    std::cout << "Сумма: "
              << " равна: " << result << std::endl;
    
    return 0;
}


int sumOfThree(int a, int b, int c) {
    // Возвращаем сумму трех параметров
    return a + b + c;
}
