// Square Root of a number using function
#include<stdio.h>
#include<math.h>
float square (int n);

int main()
{
    int n; 
    printf("\n\nEnter a number :");
    scanf("%d",&n);

        printf("\nSquare root is : %f\n\n",square(n));

    return 0;
}

float square (int n)
{
    return sqrt(n);
}