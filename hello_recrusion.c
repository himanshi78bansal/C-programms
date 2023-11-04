// Print Hello World! using Recrusion
#include<stdio.h>
void hello(int n);
int main()
{
    int n;
    printf("\n\nEnter the value of n :");
    scanf("%d",&n);
    hello(n);
    return 0;
}
void hello(int n){
    if(n == 0)
    return;
    printf("\nHello World!\n");
    hello(n-1);
}
