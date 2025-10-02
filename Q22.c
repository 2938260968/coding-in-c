//Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main(){
    float cp, sp, profit, loss;
    printf("enter cost price and selling price :");
    scanf("%f %f", &cp, &sp);
    if(sp>cp){
        profit=sp-cp;
        printf("profit= %.2f\n", profit);
        printf("profit percentage=%.2f\n", (profit/cp)*100);
    } else if(cp>sp){
        loss=cp-sp;
        printf("loss=%.2f\n", loss);
        printf("loss percentage=%.2f\n", (loss/cp)*100);
    }
    else{
        printf("no profit no loss\n");
    }
return 0;
}