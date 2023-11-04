// Fibonacci series using array
#include<stdio.h>
int main()
{
    int n;
    printf("\n\nEnter n : ");
    scanf("%d",&n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    printf("\n\n%d\n",fib[0],fib[1]);

    for(int i = 2; i<n; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d\n",fib[i]);
    }
    printf("\n");
    return 0;
}
