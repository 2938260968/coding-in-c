//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    int i = 0, start = 0;

    puts("enter full name :");
    puts(name);

    while (name[i] != '\0' && name[i] != '\n') {

        if (i == 0) {
            
            if (name[i] != ' ')
                printf("%c. ", name[i]);
        }
        else if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\n') {
            start = i + 1;

            
            int j = start;
            int isLast = 1;
            while (name[j] != '\0' && name[j] != '\n') {
                if (name[j] == ' ') {
                    isLast = 0;
                    break;
                }
                j++;
            }

            
            if (isLast) {
                printf("%s", &name[start]);
                break;
            } 
            
            else {
                printf("%c. ", name[start]);
            }
        }

        i++;
    }

    return 0;
}
