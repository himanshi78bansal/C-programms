// Function using Pointer 
#include<stdio.h>
int result (int a,int b, int* sum, int* product, float* average)
{
    *sum = a + b;
    *product = a * b;
    *average = *sum/2;
}

int main()
{
    int a,b,sum, product;
    float average;
    
    printf("\n\nEnter First No. : ");
    scanf("%d",&a);
    printf("Enter Second No. : ");
    scanf("%d",&b);

    result(a, b, &sum, &product, &average);

    printf("\nSum = %d\nProduct = %d\nAverage = %f\n\n",sum,product,average);

    return 0;
}

// int result(int a, int b, int* sum, int* product, int* average)
// {
//     *sum = a + b;
//     *product = a * b;
//     *average = *sum/2;
// }
