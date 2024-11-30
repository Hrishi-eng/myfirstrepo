#include <stdio.h>
#include "myfunctions.h"

int main() {
    int num1 = 10, num2 = 5;

    // Using add function
    int sum = add(num1, num2);
    printf("Addition: %d + %d = %d\n", num1, num2, sum);

    // Using subtract function
    int diff = subtract(num1, num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, diff);

    // Using multiply function
    int product = multiply(num1, num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);

    // Using divide function
    float quotient = divide((float)num1, (float)num2);
    printf("Division: %d / %d = %.2f\n", num1, num2, quotient);

    return 0;
}

