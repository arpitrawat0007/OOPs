#include <iostream>
int main() {
    int i = 0;
loop:
    std::cout << i << " ";
    ++i;
    if (i < 10) {
        goto loop; // Jump to the 'loop' label
    }
    std::cout << std::endl;
    return 0;
}
