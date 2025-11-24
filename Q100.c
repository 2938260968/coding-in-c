//Print all sub-strings of a string.

#include <stdio.h>

int main() {
    char str[200];
    int i, j, k;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    int len = 0;
    while (str[len] != '\0') len++;
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("All substrings:\n");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

