#include <stdio.h>
#include <math.h>

void log_calc() {
    int choice;
    double num;

    printf("----- LOG CALCULATOR -----\n");
    printf("1. log10(x)\n");
    printf("2. ln(x)\n");
    printf("Choose an option: ");
    scanf("%d", &choice);

    printf("Enter a number: ");
    scanf("%lf", &num);

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





int calc() {
char operator;
double num1, num2;




printf("enter an operator (+, -, *, /): \n");
scanf(" %c", &operator);

   printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

switch (operator) {
    case '+':
        printf("result: %.2f\n", num1 + num2);
        break;
    case '-':
        printf("result: %.2f\n", num1 - num2);
        break;
    case '*':
        printf("result: %.2f\n", num1 * num2);
        break;
    case '/':
        printf("result: %.2f\n", num1 / num2);
        break;
    default:
        printf("error: invalid operator\n");
}
    return 0;
}

int main() {
    int choice;


   printf("---------SCIENTIFIC CALCULATOR---------\n");
    printf("1. Basic Calculator\n");
    printf("2. Log Calculator\n");
    printf("Choose: ");
    scanf("%d", &choice);

    if (choice == 1) {
        calc();
    } else if (choice == 2) {
        log_calc();
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}



