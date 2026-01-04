#include <iostream>
//вариант 2
int main() {
    int arr[100];
    int N, x;
    
    // Ввод размера массива
    std::cout << "Введите размер массива: ";
    std::cin >> N;
    
    // Ввод элементов
    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    
    // Ввод числа для поиска
    std::cout << "Введите число x: ";
    std::cin >> x;
    
    // Вывод входных данных
    std::cout << "Входные данные: {";
    for (int i = 0; i < N; i++) {
        std::cout << arr[i];
        if (i < N - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}, x = " << x << std::endl;
    
    // Поиск первого вхождения
    int result = -1;
    for (int i = 0; i < N; i++) {
        if (arr[i] == x) {
            result = i;
            break;
        }
    }
    
    // Вывод результата
    std::cout << "Выходные данные: ";
    if (result != -1) {
        std::cout << "Индекс первого вхождения: " << result << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }
    

}
