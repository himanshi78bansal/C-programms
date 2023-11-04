// Factorial of a number using recrusion
#include<stdio.h>
int fact(int n);
int main()
{
    int n;
    printf("\n\nEnter number : ");
    scanf("%d",&n);

    printf("\nFactorial is : %d\n\n",fact(n));

    return 0;
}

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int factNm = fact(n-1);
    int factN = factNm * n;
    return factN;
}

