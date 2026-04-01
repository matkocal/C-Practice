#include <stdio.h>

int calc() {
char operator;
double num1, num2;

printf("---------SCIENTIFIC CALCULATOR---------\n");


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
    calc();
    return 0;

}
