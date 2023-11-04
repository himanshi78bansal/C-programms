//Calculating Mathematical Formulas
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,A;

    printf("\nEnter the value of a,b,c :");
    scanf("%d%d%d",&a,&b,&c);

    A=pow(a,b*c);

    printf("\nValue of d is %d\n\n",A);

    return 0;
}

