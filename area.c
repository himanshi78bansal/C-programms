// Area of a triangle 
#include<stdio.h>
#include<math.h>

int main()
{ 
    float a,b,c,s,A;

    printf("Enter a,b,c :");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Area of triangle is : %f \n",A);

    return 0;
}
