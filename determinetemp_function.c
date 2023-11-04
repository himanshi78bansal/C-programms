//  Determone temperature whether it is Cold or Hot 
#include<stdio.h>
void dettemp (int temp);

int main()
{
    int temp;
    printf("\n\nEnter temperature :");
    scanf("%d",&temp);

    dettemp (temp);

    return 0;
}

void dettemp (int temp)
{
    if (temp<=15)
    {
    printf("\nCold\n\n");
    }
    else if (temp>15)
    {
    printf("\nHot\n\n");
    }
}