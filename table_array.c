// Table using array
#include<stdio.h>
int main()
{
    int x,y;

    printf("\n\nEnter the first number :");
    scanf("%d",&x);

    printf("\nEnter the second number :");
    scanf("%d",&y);

    printf("\n");
    
    int table[2][10] = {{x,y},{}};

    table[0][0] = x;
    for (int i = 1; i<=10; i++)
    {
        table[0][i] = (table[0][0])*i;

        printf("%d\t",table[0][i]);
    }
    printf("\n\n");
        
    table[1][0] = y;

    for (int j = 1; j<=10; j++)
    {
        table[1][j] = (table[1][0])*j;

        printf("%d\t",table[1][j]);
    }
    printf("\n\n");

    return 0;
}
