// Write a program to swap two numbers without using a third variable.
# include<stdio.h>
int main(){
    int a;
    int b;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("after swapping a is : %d\n", a);
    printf("after swapping b is : %d\n", b);
    return 0;
}