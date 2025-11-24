//Print each character of a string on a new line.

#include <stdio.h>
#include <string.h>

int main(){
    char str[10]="mridul";
    int i=0;
    while(str[i]!='\0'){
        printf("%c\n", str[i]);
        i++;

    }
    return 0;
}