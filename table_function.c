// Table of a number using Function
#include<stdio.h>
void table(int n);

int main()
{
int n;
    printf("\n\nEnter the number :");
    scanf("%d", &n);
    
    table(n); //argument/actual parameter

    return 0;
}
void table(int n){   //parameter/formal parameter
    for (int i = 1; i <= 10; i++){
        printf("\n%d\n",n*i);
    }

}
