#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[100];
    int l =0; // initialize a variable to store  the length of the string

    printf("\n\nFind the length of string: \n");
    printf("Please input the string: ");

    //Read a string
    fgets(str, sizeof str, stdin); /* char *fgets(char *str, int n, FILE *stream)
    str: A pointer to a character array where the input will be stored.
    n: The maximum number of character to read, including the null terminator(\0)
    stream: The input stream to read from. Common examples are 
    stdin: standard input
    fopen(): file stream opened with fopen()
     */

    //Loop to calculate the length of the string
    while (str[l] != '\0')
    {
        l++;
    }
    printf("Length of string is : %d\n\n", l -1);
    return 0;
}