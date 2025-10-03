//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
int main() {
    int n, r, complement=0, power=1;
    printf("enter a binary number : ");
    scanf("%d", &n);
    while(n>0){
        r=n%10;
        if(r==0){
            r=1;
        } else {
            r=0;
        }
        complement+=r*power;
        power*=10;
        n=n/10;
    }
    printf("1's complement is: %d\n", complement);
    return 0;
}