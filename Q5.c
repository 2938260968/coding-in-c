// Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){
    float celsius;
    printf("enter temp. in celsius :");
    scanf("%d", &celsius);
    printf("temp. in fahrenheit is : %f", (celsius*9/5)+32);
    return 0;
}