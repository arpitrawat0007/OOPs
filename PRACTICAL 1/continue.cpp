#include <iostream>
int main() {
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            continue; // Skip printing 5
        }
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
