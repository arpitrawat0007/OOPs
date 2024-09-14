#include <iostream>
using namespace std;

// Function with float type parameter
float absolute(float var) {
    if (var < 0.0)
        var = -var;
    return var;
}

// Function with int type parameter
int absolute(int var) {
    if (var < 0)
        var = -var;
    return var;
}

int main() {
    // Call function with int type parameter
    cout << "Absolute value of -5 = " << absolute(-5) << endl;

    // Call function with float type parameter
    cout << "Absolute value of 5.5 = " << absolute(5.5f) << endl;

    return 0;
}
