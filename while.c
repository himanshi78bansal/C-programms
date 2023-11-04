// Sum of ten natural numbers using while loop
#include<stdio.h>
int main()
{
    int n; 
    printf("\n\nEnter number :");
    scanf("%d",&n);

    int i=1;
    int sum = 0;

    while(i<=n){
        sum = sum+i;
        i++;
    }
    
    printf("\nSum = %d\n\n",sum);

    return 0;
}
