//Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>
#include <string.h>

int main(){

    char date[20];
    char day[3], month[3], year[5];

    puts("eneter date in dd/04/yyyy format :");
    puts(date);

    day[0]=date[0];
    day[1]=date[1];
    day[2]='\0';

    month[0]=date[3];
    month[1]=date[4];
    month[2]='\0';

    year[0]=date[6];
    year[1]=date[7];
    year[2]=date[8];
    year[3]=date[9];
    year[4]='/0';

    char mname[4]="Apr";

    puts("converted date: ");
    puts(date);

    return 0;

}