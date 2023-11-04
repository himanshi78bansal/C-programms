//Larger of two numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter two numbers :");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("Larger is : %d\n\n",a);
    } else {
            printf("Larger is : %d\n\n",b);

    }

    return 0;
}
