//Calculating Mathematical Formulas
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,q,x,t,A;

    printf("\nEnter the value of a,b,c,d,q,x,t :");
    scanf("%f%f%f%f%f%f%f",&a,&b,&c,&d,&q,&x,&t);

    A=(a+b)/(c-d)*(q*(x-t));

    printf("\nValue of d is %f\n\n",A);

    return 0;
}

