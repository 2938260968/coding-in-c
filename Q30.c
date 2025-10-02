//Write a program to reverse a given number.
#include <stdio.h>
int main(){
    int n;
    int reversed=0;
    printf("enter a number : ");
    scanf("%d", &n);
    while(n!=0){
        int digit=n%10;
        reversed=reversed*10+digit;
        n=n/10;
    }
    printf("reversed number is : %d\n", reversed);
    return 0;
}