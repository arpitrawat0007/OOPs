#include <iostream>
int main() {
    int x = 10;
    if (x > 5) {
        if (x < 15) {
            std::cout << "x is between 5 and 15" << std::endl;
        }
    } else {
        std::cout << "x is not greater than 5" << std::endl;
    }
    return 0;
}
