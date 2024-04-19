//WAP for calculator using funtion.

#include <stdio.h>

// Function declarations
float add(float num1, float num2);
float subtract(float num1, float num2);
float multiply(float num1, float num2);
float divide(float num1, float num2);

int main() {
    char operator;
    float num1, num2, result;

    // Input numbers and operator from user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    // Perform operation based on operator
    switch(operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
        default:
            printf("Error! Invalid operator.");
            return 1;
    }

    // Display result
    printf("Result: %.2f\n", result);

    return 0;
}

// Function definitions
float add(float num1, float num2) {
    return num1 + num2;
}

float subtract(float num1, float num2) {
    return num1 - num2;
}

float multiply(float num1, float num2) {
    return num1 * num2;
}

float divide(float num1, float num2) {
    if(num2 != 0)
        return num1 / num2;
    else {
        printf("Error! Cannot divide by zero.");
        return 0;
    }
}

