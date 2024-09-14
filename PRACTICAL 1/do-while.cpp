#include <iostream>
int main() {
    int i = 0;
    do {
        std::cout << i << " ";
        ++i;
    } while (i < 5);
    std::cout << std::endl;
    return 0;
}
