//Toggle case of each character in a string.

#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    int i=0;
    puts("enter string : ");
    gets(str);


    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]>='z'){
            str[i]=str[i]-32;
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        i++;
    }
    puts("togled case string : ");
    puts(str);
    return 0;

}