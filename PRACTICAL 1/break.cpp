#include <iostream>
int main() {
    for (int i = 0; i < 10; ++i) {
        std::cout << i << " ";
        if (i == 5) {
            break; // Terminate the loop when i equals 5
        }
    }
    std::cout << std::endl;
    return 0;
}
