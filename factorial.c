// Factorial of any number
#include<stdio.h>
int main()
{
    int n; 
    
    printf("\n\nEnter number :");
    scanf("%d",&n);

    int fact = 1;

    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
        printf("\nFactorial of %d is : %d\n\n",n,fact);

    return 0;
}
