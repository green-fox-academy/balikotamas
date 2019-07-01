#include <iostream>

int main() {
    int numberOfChickens;
    int numberOfPigs;
    int chickenLegs = 2;
    int pigLegs = 4;
    std::cout << "Please enter the number of the chickens: ";
    std::cin >>  numberOfChickens;
    std::cout << "Please enter the number of the pigs: ";
    std::cin >> numberOfPigs;
    std::cout << "The legs os the animals: " << numberOfChickens * chickenLegs + numberOfPigs * pigLegs << std::endl;



    return 0;
}