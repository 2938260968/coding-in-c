//heck if one string is a rotation of another.

#include <stdio.h>
#include <stdbool.h>

bool isRotation(char s1[], char s2[]) {
    int n1 = 0, n2 = 0;

    while (s1[n1] != '\0') n1++;
    while (n1 > 0 && s1[n1-1] == '\n') { s1[n1-1] = '\0'; n1--; }

    while (s2[n2] != '\0') n2++;
    while (n2 > 0 && s2[n2-1] == '\n') { s2[n2-1] = '\0'; n2--; }

    if (n1 != n2) return false;  
    if (n1 == 0) return true;     

    char concat[2 * n1 + 1];
    for (int i = 0; i < 2 * n1; i++) {
        concat[i] = s1[i % n1];
    }
    concat[2 * n1] = '\0';


    for (int start = 0; start <= 2 * n1 - n2; start++) {
        int k;
        for (k = 0; k < n2; k++) {
            if (concat[start + k] != s2[k]) break;
        }
        if (k == n2) return true; 
    }

    return false;
}

int main() {
    char s1[500], s2[500];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    if (isRotation(s1, s2))
        printf("The second string IS a rotation of the first.\n");
    else
        printf("The second string is NOT a rotation of the first.\n");

    return 0;
}
