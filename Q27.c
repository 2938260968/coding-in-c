//Write a program to print the sum of the first n odd numbers.

#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("enter a number : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum=sum+(2*i-1);
    }
    printf("sum of first %d odd numbers is : %d\n", n, sum);
    return 0;
}