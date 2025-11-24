//Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[300], longest[100];
    int i = 0, j = 0, maxLen = 0, currLen = 0, start = 0;

    puts("enter a sentence");
    puts(str);
     

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                start = i - currLen; 
            }
            currLen = 0;
        }
        i++;
    }

    for (i = 0; i < maxLen; i++) {
        longest[i] = str[start + i];
    }
    longest[i] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
