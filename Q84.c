//Convert a lowercase string to uppercase without using built-in functions.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100]= "mridul";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  
        }
        i++;
    }

    puts("Uppercase string: ");
    puts(str);

    return 0;
}
