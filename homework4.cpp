#include <string>
#include <iostream>

using namespace std;

int main()
{       //Вариант 1
    char a;
    std::cout<<"Введите символ: ";//Запрашиваем и записываем символ
    std::cin>>a;
    int b = a;//Преобразуем символ в код 
    



    std::cout<<"Символ: "<<a<<"."<< std::endl;//Выдаем первый результат
    std::cout<<"Код: "<<b<<"." <<std::endl;
    
    b = b + 1;//Находим значения для следубщего символа
    a = b;

    std::cout<<"Код следующего символа: "<<b<<"." <<std::endl;//Выдаем оставшийся результат
    std::cout<<"Следующий символ: "<<a<<"."<< std::endl;
    
}
