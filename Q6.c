// Write a program to swap two numbers using a third variable.
# include<stdio.h>
int main(){
    int a=3;
    int b=5;
    int t;
    t=a;
    a=b;
    b=t;
    printf("after swapping a is : %d\n", a);
    printf("after swapping b is : %d\n", b);
    return 0;
}