// Area of Square, Circle, Rectangle using function
#include<stdio.h>
#include<math.h>

float square(float side);
float circle(float radius);
float rectangle(float length,float breath);

int main()
{
    int n;
    float length,breath,Area,side,radius;
        printf("\n\nEnter your choice 1-3 : ");
        scanf("%d",&n);
    if (n==1)
    {
        printf("\nEnter the side of square : ");
        scanf("%f",&side);
    square(side);
    }
    else if (n==2)
    {
        printf("\nEnter the Length of rectangle : ");
        scanf("%f",&length);
        printf("\nEnter the breath of rectangle : ");
        scanf("%f",&breath);
    rectangle(length,breath);
    }
    else if (n==3)
    {
        printf("\nEnter the radius of circle : ");
        scanf("%f",&radius);
    circle(radius);
    }

    return 0;

}

float square(float side)
{
    float Area;
    Area = side * side;
    printf("\nArea of Square is : %f\n\n",Area);
}

float rectangle(float length,float breath)
{
    float Area;
    Area = length * breath;
    printf("\nArea of Rectangle is : %f\n\n",Area);
}

float circle(float radius)
{
    float Area;
    Area = 3.14 * radius * radius; 
    printf("\nArea of Circle is : %f\n\n",Area);
}

