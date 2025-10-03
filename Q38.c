//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main() {
    int n,s=0,r;
    printf("enter a number : ");
    scanf("%d", &n);
    while(n>0){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("sum of digits is: %d\n", s);
    return 0;
}