//Calculating Mathematical Formulas
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;

    printf("\nEnter the value of a,b,c :");
    scanf("%f%f%f",&a,&b,&c);

    d=b*b*-4*a*c;

    printf("\nValue of d is %f\n\n",d);

    return 0;
}
