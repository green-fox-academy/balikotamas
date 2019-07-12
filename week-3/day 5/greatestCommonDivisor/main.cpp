#include<iostream>

int greatestCommonDivisor(int a, int b) {
    if (a == 0 || b == 0) {
        return 0;

    } else if (a == b) {
        return a;
//google
    } else if (a > b) {
        return greatestCommonDivisor(a - b, b);
    }
    else return greatestCommonDivisor(a, b - a);

}
int main() {
    std::cout << greatestCommonDivisor(25, 104) << std::endl;


    return 0;
}