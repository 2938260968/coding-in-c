//Reverse a string.

#include <stdio.h>
#include <string.h>

int main(){
    char str[100]="Mridul";

    int k=0;
    int size=0;
    while(str[k]!='\0'){
        size++;
        k++;
        
    }
    for(int i=0, j=size-1; i<=j; i++, j--){
        int t=str[i];
        str[i]=str[j];
        str[j]=t;
    }
    puts("the reverse is :");
    puts(str);
    return 0;
}