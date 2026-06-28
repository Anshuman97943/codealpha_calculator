
#include <stdio.h>

int main() {
    char operator;
    double first, second, result;

    // Prompt user for the operator
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Prompt user for the two numbers
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    // Evaluate the operator using a switch case
    switch (operator) {
        case '+':
            result = first + second;
            printf("%.2lf + %.2lf = %.2lf\n", first, second, result);
            break;
            
        case '-':
            result = first - second;
            printf("%.2lf - %.2lf = %.2lf\n", first, second, result);
            break;
            
        case '*':
            result = first * second;
            printf("%.2lf * %.2lf = %.2lf\n", first, second, result);
            break;
            
        case '/':
            // Check to ensure the denominator is not zero
            if (second != 0.0) {
                result = first / second;
                printf("%.2lf / %.2lf = %.2lf\n", first, second, result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
            
        default:
            // If the user enters an invalid operator
            printf("Error! Operator is not correct.\n");
    }

    return 0;
}