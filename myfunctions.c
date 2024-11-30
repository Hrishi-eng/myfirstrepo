#include "myfunctions.h"

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int subtract(int a, int b) {
    return a - b;
}

// Function to divide two floats
float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    }
    return 0.0; // Handle divide by zero case
}

// Function to multiply two integers
int multiply(int a, int b) {
    return a * b;
}
