#include <iostream>
#include <fstream>

int divide (int x);
int main() {
    int x;
    std::cout << "Enter a number ";
    std::cin >> x;
    try { divide(x);
        std::cout << divide(x) << std::endl;
    } catch (int y) {
        std::cout <<  "fail" << std::endl;
    }

    return 0;
}

int divide (int x) {
    if (x == 0) {
        throw 99;
    } else {
        return 10 / x;



}}
