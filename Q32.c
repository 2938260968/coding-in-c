// Write a program to check if a number is a palindrome.
#include <stdio.h>
int main() {
    int n,c,s=0,r;
    printf("enter a number : ");
    scanf("%d", &n);
    c=n;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(c==s){
        printf("palindrome number\n");
    }
    else{
        printf("not a palindrome number\n");
    }
    return 0;
}