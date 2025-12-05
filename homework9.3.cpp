#include <iostream>

int sumToN(int n) {

    if (n == 1) {
        return 1;
    }

    return n + sumToN(n - 1);
}

int main() {
    int n;
    
      std::cout << "Введите число n: ";
    std::cin >> n;
    
     std::cout << "Сумма" << sumToN(n) << std::endl;
    
    return 0;
}
