// Number of days in a month using switch statement 
#include<stdio.h>
int main()
{
    int month;
    printf("\n\nEnter month :");
    scanf("%d",&month);

    switch(month){
        case 1: printf("31 days\n\n");
        break;
        case 2: printf("28 days\n\n");
        break;
        case 3: printf("31 days\n\n");
        break;
        case 4: printf("30 days\n\n");
        break;
        case 5: printf("31 days\n\n");
        break;
        case 6: printf("30 days\n\n");
        break;
        case 7: printf("31 days\n\n");
        break;
        case 8: printf("31 days\n\n");
        break;
        case 9: printf("30 days\n\n");
        break;
        case 10: printf("31 days\n\n");
        break;
        case 11: printf("30 days\n\n");
        break;
        case 12: printf("31 days\n\n");
        break;
        default : printf("Invalid month\n\n");
    }
    return 0;
}
