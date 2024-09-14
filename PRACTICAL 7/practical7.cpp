#include <iostream>
#include <sstream> // Include the necessary header for stringstream

int main() {
    // Input string containing comma-separated values
    std::string input = "abc,def,ghi";

    // Create a stringstream from the input string
    std::istringstream ss(input);

    std::string token;
    while (std::getline(ss, token, ',')) {
        // Print each token (separated by commas)
        std::cout << token << '\n';
    }

    return 0;
}
