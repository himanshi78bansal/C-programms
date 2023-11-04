// Sum of natural numbers using recrusion
#include<stdio.h>
int sum(int n);
int main()
{
    int n;
    printf("\n\nEnter number : ");
    scanf("%d",&n);

    printf("\nSum is : %d\n\n",sum(n));

    return 0;
}

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    int sumNm = sum(n-1);
    int sumN = sumNm + n;
    return sumN;
}
