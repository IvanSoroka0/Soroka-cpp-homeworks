#include <iostream>

void doubleArray(int arr[], int size);

int main() {
    // Создаем массив из 5 чисел
    const int SIZE = 5;
    int numbers[SIZE];
    
    std::cout << "=== Умножение элементов массива на 2 ===" << std::endl;
    std::cout << std::endl;
    
    // Вводим элементы массива с клавиатуры
    std::cout << "Введите " << SIZE << " целых чисел:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << "Элемент [" << i << "]: ";
        std::cin >> numbers[i];
    }
    
    std::cout << std::endl;
    
    // Выводим исходный массив
    std::cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    // Вызываем функцию для умножения элементов массива на 2
    doubleArray(numbers, SIZE);
    
    // Выводим измененный массив
    std::cout << "Массив после умножения на 2: ";
    for (int i = 0; i < SIZE; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

// Определение функции doubleArray
void doubleArray(int arr[], int size) {
    // Проходим по всем элементам массива
    for (int i = 0; i < size; i++) {
        // Умножаем каждый элемент на 2
        arr[i] = arr[i] * 2;

    }

}
