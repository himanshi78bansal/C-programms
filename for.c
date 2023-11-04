// Sum of ten natural numbers using for loop
#include<stdio.h>
int main()
{
    int n,sum; 
    printf("\n\nEnter number :");
    scanf("%d",&n);

    sum = 0;

    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    printf("\nSum = %d\n\n",sum);

    return 0;
}
