#include <iostream>

int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
    std::cout << "Please enter the value of a: ";
    std::cin >> a;
    std::cout << "Please enter the value of b: ";
    std::cin >> b;
    std::cout << "Please enter the value of c: ";
    std::cin >> c;
    std::cout << "Please enter the value of d: ";
    std::cin >> d;
    std::cout << "Please enter the value of e: ";
    std::cin >> e;
    std::cout << "Sum: " << a + b + c + d + e << " Average: " << (float) (a + b + c + d + e) / 5 << std::endl;

    return 0;
}