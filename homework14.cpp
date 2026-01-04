#include <iostream>
#include <string>

int main() {
    // Фиксированный массив слов
    std::string words[] = {"flick", "apple", "banana", "flick", "orange"};
    bool results[5];
    bool current = true;
    
    // Выводим входные данные
    std::cout << "Входные данные: ";
    for (int i = 0; i < 5; i++) {
        std::cout << "\"" << words[i] << "\"";
        if (i < 4) std::cout << ", ";
    }
    std::cout << std::endl;
    
    // Обрабатываем слова
    for (int i = 0; i < 5; i++) {
        if (words[i] == "flick") {
            current = !current;
        }
        results[i] = current;
    }
    
    // Выводим результаты
    std::cout << "Выходные данные: ";
    for (int i = 0; i < 5; i++) {
        std::cout << (results[i] ? "true" : "false");
        if (i < 4) std::cout << ", ";
    }
    std::cout << std::endl;

}
