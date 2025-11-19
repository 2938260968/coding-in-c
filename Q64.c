//Find the digit that occurs the most times in an integer number.

#include <stdio.h>
int mostFrequentDigit(int number);
void printResult(int digit);

int main(){
    int number=1223334444;
    int resultDigit=mostFrequentDigit(number);
    printResult(resultDigit);

    return 0;
}
void printResult(int digit){
    printf("The digit that occurs the most is: %d\n", digit);
}
int mostFrequentDigit(int number){
    int digitCount[10]={0};
    while(number>0){
        int digit=number%10;
        digitCount[digit]++;
        number=number/10;
    }
    int maxCount=0;
    int mostFrequent=-1;
    for(int i=0; i<10; i++){
        if(digitCount[i]>maxCount){
            maxCount=digitCount[i];
            mostFrequent=i;
        }
    }
    return mostFrequent;
}
