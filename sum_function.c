// Sum of two numbers using Function
#include<stdio.h>
int sum(int a, int b);

int main()
{
int a,b;
    printf("\n\nEnter first number :");
    scanf("%d", &a);
    printf("\nEnter second number :");
    scanf("%d", &b);

int s = sum(a,b);
    printf("\nSum of two numbers is : %d\n\n",s);

    return 0;
}
int sum(int a, int b){
    return a + b; 
}
