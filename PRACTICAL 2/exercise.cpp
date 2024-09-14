// Programming exercise on arrays, strings, function and pointers in C++
#include <iostream>
#include <cstring>

// Function to find the maximum element in an array
int findMax(const int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to reverse a string using pointers
void reverseString(char* str) {
    int length = strlen(str);
    char *start = str;
    char *end = str + length - 1;

    while (start < end) {
        // Swap characters
        char temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers
        ++start;
        --end;
    }
}

int main() {
    // Exercise 1: Finding the maximum element in an array
    const int arr[] = {23, 45, 12, 67, 89, 34, 56, 78, 90, 54};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int maxElement = findMax(arr, arrSize);
    std::cout << "Maximum element in the array: " << maxElement << std::endl;

    // Exercise 2: Reversing a string using pointers
    char str[] = "Hello, World!";
    std::cout << "Original String: " << str << std::endl;
    reverseString(str);
    std::cout << "Reversed String: " << str << std::endl;

    // Exercise 3: Using functions
    int a = 5, b = 7;
    int sum = a + b;
    std::cout << "Sum of " << a << " and " << b << " is: " << sum << std::endl;

    return 0;
}

