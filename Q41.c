//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main(){
    int number, first, end, swap,digit,divide;
    printf("enter number:");
    scanf("%d\n", &number);
    digit=log10(number);   //log10(12345)=4
    divide=pow(10,digit);   //pow(10,4)=10000

    first=number/divide;  //12345/10000=1
    number=number%divide; //12345%10000=2345
    end=number%10;       //2345%10=5
    number=number/10;    //2345/10=234

    swap=end*divide+number*10+first; //5*10000+234*10+1=52341
    printf("swapped number is: %d\n", swap);
    return 0;
    

    


}