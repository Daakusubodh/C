#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100];
    int l = 0;

    printf("Please enter your string:  ");

    fgets(str, sizeof str, stdin);

    while (str[l] != '\0') {
        printf("%c   ", str[l]);
        l++;
    }

    printf("And the length of the string is %d", l-1);

    return 0;
}