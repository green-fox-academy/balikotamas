#include <iostream>

int main() {
    int a;
    int b;
    std::cout << "The number of the girls: ";
    std::cin >> a;
    std::cout << "The number of the boys: ";
    std::cin >> b;
    if (a == 0) {
        std::cout << "Sausage party" << std::endl;
    }
    if ((a == b) & (a + b) > 20) {
        std::cout << "The party is excellent" << std::endl;
    } else if ((a != b) & (a + b) >= 20) {
        std::cout << "Quite cool party" << std::endl;
    } else if ((a + b < 20) & a > 0) {
        std::cout << "Average party..." << std::endl;
    }
}