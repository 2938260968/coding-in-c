//Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[26] = {0};
    
    puts("enter a string : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';
            freq[index]++;

            if (freq[index] == 2) {
                printf("First repeating lowercase: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}
