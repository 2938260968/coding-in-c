// Write a program to input two numbers and display their sum, difference, product, and quotient.
# include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("sum is : %d\n", a+b);
    printf("difference is : %d\n", a-b);
    printf("product is :%d\n:", a*b);
    printf("quotient is : %d\n", a/b);
    return 0;
}