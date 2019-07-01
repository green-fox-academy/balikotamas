#include <iostream>

int main() {
    int a;
    int b = 0;
    std::cout << "Please enter a number: " << std::endl;
    std::cin >> a;
    while (b <= 10) {
        std::cout << a << " * " << b << " = " << a * b << std::endl;
        b++;

    }

    return 0;
}