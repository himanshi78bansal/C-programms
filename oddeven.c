// Number is even or not
#include<stdio.h>
int main()
{
    int a;

    printf("\nEnter a number :");
    scanf("%d",&a);

    if(a%2==0){
        printf("\nNumber is even\n\n");
    } else {
        printf("\nNumber is odd\n\n");
    }

    return 0;
}
