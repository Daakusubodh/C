//  fibonacci using recursive function
#include<stdio.h>

void fibo(int,int,int);
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    fibo(0,1,n);
    return 0;
}

void fibo(int a, int b, int n) // a=0,b=1 as default , n=n
{
    if(n>0){
        printf("%d\t",a);
        fibo(b,a+b,n-1);
    }
}