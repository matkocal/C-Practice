#include <stdio.h>
#include <math.h>

// Logarithm calculator
void log_calc() {
    int choice;
    double num;

    printf("\n----- LOG CALCULATOR -----\n");
    printf("1. log10(x)\n");
    printf("2. ln(x)\n");
    printf("Choose an option: ");

    if (scanf("%d", &choice) != 1) {
        printf("Invalid input\n");
        return;
    }

    printf("Enter a number: ");
    if (scanf("%lf", &num) != 1) {
        printf("Invalid input\n");
        return;
    }

    if (num <= 0) {
        printf("Error: log undefined for non-positive numbers\n");
        return;
    }

    switch (choice) {
        case 1:
            printf("log10(%.2f) = %.4f\n", num, log10(num));
            break;
        case 2:
            printf("ln(%.2f) = %.4f\n", num, log(num));
            break;
        default:
            printf("Invalid choice\n");
    }
}

// Basic calculator
int calc() {
    char operator;
    double num1, num2;

    printf("\n----- BASIC CALCULATOR -----\n");
    printf("Enter an operator (+, -, *, /): ");

    if (scanf(" %c", &operator) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    switch (operator) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: division by zero\n");
            } else {
                printf("Result: %.2f\n", num1 / num2);
            }
            break;
        default:
            printf("Error: invalid operator\n");
    }

    return 0;
}

int main() {
    int choice;

    while (1) {
        printf("\n========= SCIENTIFIC CALCULATOR =========\n");
        printf("1. Basic Calculator\n");
        printf("2. Log Calculator\n");
        printf("0. Exit\n");
        printf("Choose: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input\n");
            return 1;
        }

        if (choice == 1) {
            calc();
        } else if (choice == 2) {
            log_calc();
        } else if (choice == 0) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
