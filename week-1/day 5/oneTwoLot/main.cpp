#include <iostream>

int main() {
    int a;
    std::cout << "Please enter a number: ";
    std::cin >> a;
    if (a <= 0) {
        std::cout << "Not enough" << std::endl;
    } else if  (a == 1) {
        std::cout << "One" << std::endl;
    } else if (a == 2) {
        std::cout << "Two" << std::endl;
    } else {
        std::cout << "A lot" << std::endl;
    }

    return 0;
}