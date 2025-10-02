//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    char operator;
    int a, b;
    printf("enter an operator (+, -, *, /, %): ");
    scanf("%c", &operator);
    printf("enter two operands: ");
    scanf("%d %d", &a, &b);
    switch(operator) {
        case '+':
            printf("%d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("%d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("%d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if(b != 0) {
                printf("%d / %d = %d\n", a, b, a / b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if(b != 0) {
                printf("%d %% %d = %d\n", a, b, a % b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }
    return 0;
}