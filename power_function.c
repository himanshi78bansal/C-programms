// Power of a number using function 
#include<stdio.h>
#include<math.h>

void calpow (int a, int n);

int main()
{
    int a,n;

    printf("\n\nEnter number :");
    scanf("%d",&a);
    printf("\nEnter power :");
    scanf("%d",&n);

    calpow(a,n);

    return 0;
}

void calpow (int a, int n)
{
    int result = pow (a,n);
    
    printf("\n%d raise to the power %d is : %d\n\n",a,n,result);
}