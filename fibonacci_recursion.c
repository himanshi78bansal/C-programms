// Write Fibonacci sequence using recursion
#include<stdio.h>
int fib (int n);
int main()
{
    int n; 
    printf("\n\nEnter number :");
    scanf("%d",&n);

    printf("Fibnocci is :%d\n\n",fib(n));

    return 0; 
}

int fib (int n){
    if(n == 0)
    return 0;
    else if (n==1)
    return 1;
    
    int fibnm1 = fib(n-1);
    int fibnm2 = fib(n-2);
    int fibn = fibnm1 + fibnm2;

    return fibn;
}