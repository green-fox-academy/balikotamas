#include <iostream>

int main() {
    int a = 20;
    int b = 17;
    int *aPtr = &a;
    int *bPtr = &b;
    int Add = *aPtr + *bPtr;
    std::cout << "Sum of aPtr and bPtr:  " << Add << std::endl;

    return 0;
}