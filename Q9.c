// Write a program to calculate simple and compound interest for given principal, rate, and time
# include<stdio.h>
int main(){
    float principal, rate,time;
    printf("enter principal, rate and time :");
    scanf("%f %f %f", &principal, &rate, &time);
    printf("simple interest is : %f\n", (principal*rate*time)/100);
    printf("compound interest is : %f\n", principal*(1+(rate/100)*(time)));

    return 0;

}