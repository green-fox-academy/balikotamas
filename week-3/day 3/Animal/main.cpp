#include <iostream>
#include "animal.h"

int main() {
    animal cirmos;
    cirmos.setAnimalSpecie("macska");

    std::cout << cirmos.getHunger() << std::endl;

    return 0;
}