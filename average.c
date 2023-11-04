// Averge of n numbers
#include<stdio.h>
int main()
{
    int n; 
    printf("\n\nEnter numbers :");
    scanf("%d",&n);

    int i = 1;
    int sum = 0;

    for(i=1; i<=n; i++){
        sum = sum+i;
    }
    printf("\nAverage = %d\n\n",sum/n);

    return 0;
}

