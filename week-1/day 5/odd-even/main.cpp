#include <iostream>

int main() {
    int a;

    std::cout << "Please enter the value of an input: ";
    std::cin >> a;
    if (a % 2 == 0) {
    std::cout << "The value is even" << std::endl;
    } else {
        std::cout << "The value is odd" << std::endl;
    }

    return 0;
}