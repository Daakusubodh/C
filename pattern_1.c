/*
C
CO
COM
COMP
COMPU
COMPUT
COMPUTE
COMPUTER
*/

#include <stdio.h>
int main(){
    int len;
    char str[20];

    //take input
    printf("Enter a string");
    scanf("%[^\n]",str);
    for (int len=0;str[len]!= '\0';len++);  
    printf("The length is %d\n",len);
    for (int i=0; str[i]!= '\0'; i++){
        for(int j=0; j<=i;j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }

}











































    // for(int i=0; str[i]!= '\0';i++){
    //     for(int j=0; j<=i; j++){
    //         printf("%c", str[j]);
    //     }
    //     printf("\n");
    // }
    // return 0;