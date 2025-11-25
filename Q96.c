//Reverse each word in a sentence without changing the word order.


#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    int i, start = 0;

    puts("Enter a sentence: ");
    gets(sentence);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ') {
            reverseWord(sentence, start, i - 1);
            start = i + 1;
        }
    }

    reverseWord(sentence, start, i - 1);

    puts("Output: ");
    puts(sentence);

    return 0;
}

