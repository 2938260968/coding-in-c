//Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j = 0, len = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    while (str[len] != '\0') {
        len++;
    }
    len--; 

    j = len - 1;


    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
