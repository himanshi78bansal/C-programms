// Sum of ten natural numbers using do-while loop
#include<stdio.h>
int main()
{
    int n; 
    printf("\n\nEnter number :");
    scanf("%d",&n);

    int i=1;
    int sum = 0;

    do{
        sum = sum+i;
        i++;
    }
    while(i<=n);

    printf("\nSum = %d\n\n",sum);

    return 0;
}
