#include <iostream>

int main() {
    int a;
    int b;
    std::cout << "first number: ",
    std::cin >> a,
    std::cout << "second number: ",
    std::cin >> b;
    if (a  > b) {
        std::cout << "The second  number should be bigger" << std::endl;
    } else {
        for (a; a < b; a ++)
            std::cout << a << std::endl;
    }

    return 0;
}