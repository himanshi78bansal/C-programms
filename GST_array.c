// GST using array 
#include<stdio.h>
int main()
{
    float finalprice,sum;
    int price [3];

    printf("\n\nEnter price : ");
    scanf("%d %d %d",&price[0], &price[1], &price[2]);

    printf("\nPrice of 1st item : %f\n",price[0]+price[0]*0.18);
    printf("\nPrice of 2nd item : %f\n",price[1]+price[1]*0.18);
    printf("\nPrice of 3rd item : %f\n",price[2]+price[2]*0.18);

    sum = (price [0]+price [1]+price [2]);
    finalprice = sum*0.18 + sum;

    printf("\nFinal Price : %f\n\n",finalprice);

    return 0;
}
