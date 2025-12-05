#include <iostream>
#include <string>

int main() {
    std::string input;
    

    std::cout << "Введите строку: ";
    std::getline(std::cin, input);
    

    bool isIsogram = true;
    

    for (int i = 0; i < input.length(); i++) {
        char currentChar = input[i];
        
        // сравниваем текущий символ со всеми последующими
        for (int j = i + 1; j < input.length(); j++) {
            char nextChar = input[j];
            
            // Сравниваем символы
            // Если нашли два одинаковых символа
            if (currentChar == nextChar) {
                // Строка не является изограммой
                isIsogram = false;
                
                // Прерываем внутренний цикл

                break;
            }
        }

        if (!isIsogram) {
            break;
        }
    }
    
    // Выводим результат
    std::cout << std::boolalpha << isIsogram << std::endl;
    
    return 0;
}
