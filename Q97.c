//Print the initials of a name.

#include <stdio.h>
#include <string.h>


int main() {
    char name[200];
    int i = 0;

    puts("enter full name :");
    puts(name);


    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]);
    }

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\n') {
            printf("%c", name[i+1]);
        }
        i++;
    }

    printf("\n");
    return 0;
}
