#include <iostream>

int powerN (int base, int n) {
    if (n == 0) {
        return 1;
    } else {
        return (base * powerN(base, n - 1));
    }
}
    int main() {

      /*  int result = 1;
        for(int i=n; n>0; i--) result *= base; */

        std::cout << powerN(2, 10) << std::endl;
        return 0;
}
