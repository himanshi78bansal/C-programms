// Vector sum using structure
#include<stdio.h>

struct vector
{
    int x;
    int y;
};

void cal (struct vector v1, struct vector v2, struct vector sum);          // function declare

int main()
{
    struct vector v1 = {5,10};
    struct vector v2 = {3,7};
    struct vector sum = {0};

    cal(v1,v2,sum);     // function call

    return 0;
}

void cal(struct vector v1,struct vector v2,struct vector sum)         // function definition
{
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("\n\nsum of x vector is : %d\n",sum.x);
    printf("sum of y vector is : %d\n\n",sum.y);
}