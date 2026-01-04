#include <iostream>

int main() {
    double x, y;
    
    std::cout << "Введите координаты точки (x y): ";
    std::cin >> x >> y;
    
    // (x-2)^2 + (y+1)^2=25
    double dx = x - 2.0;
    double dy = y + 1.0;
    double dist = dx*dx + dy*dy;
    
    std::cout << "Входные данные: x = " << x << ", y = " << y << std::endl;
    
    if (dist < 25.0) {
        std::cout << "Выходные данные: Точка внутри окружности" << std::endl;
    } else if (dist == 25.0) {
        std::cout << "Выходные данные: Точка на границе окружности" << std::endl;
    } else {
        std::cout << "Выходные данные: Точка вне окружности" << std::endl;
    }
    
    return 0;
}
