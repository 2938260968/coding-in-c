//Replace spaces with hyphens in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i = 0;

    puts("enetr a string :");
    gets(str);

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    puts("Modified string: ");
    puts(str);

    return 0;
}
