#include <iostream>

int sumOfDigits (int n)
{
    if (n == 0) {
        return 0;
    } else {
        return n % 10 + sumOfDigits(n / 10);
    }

}
int main() {
    std::cout << sumOfDigits(211) <<std::endl;

    return 0;
}