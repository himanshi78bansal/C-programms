// Write Fibonacci sequence using loop 
#include<stdio.h>
int main()
{
    int n,a,b,c; 
    printf("\n\nEnter number :");
    scanf("%d",&n);
    a = 0;
    b = 1;
    for(int i = 1; i<=n; i++)
    {
    printf("fib %d = %d\n",i,c);
    c = a + b; 
    a = b; 
    b = c; 
    }

    return 0; 
}
