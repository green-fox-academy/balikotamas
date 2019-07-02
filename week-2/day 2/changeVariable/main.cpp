#include <iostream>

int main() {
    float temperature = 21.3;
    float *newTemperature  = &temperature;
    *newTemperature = 23;

       std::cout << *newTemperature << std::endl;

    return 0;
}