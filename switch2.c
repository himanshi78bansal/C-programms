// Number of days in a month using switch statement 
#include<stdio.h>
int main()
{
int month,year,days;
printf("\n\nEnter year :");
scanf("%d",&year);
printf("\nEnter month :");
scanf("%d",&month);

switch(month){
        case 1: 
        case 3: 
        case 5:
        case 7:
        case 8: 
        case 10:
        case 12:
                printf("\nNumber of days are :31\n\n");
                break;

        case 4: 
        case 6:  
        case 9:
        case 11: 
                printf("\nNumber of days are :30\n\n");
                break;

        case 2:    
                if(year%4 == 0)
                printf("\nNumber of days are :29\n\n");

                else 
                printf("\nNumber of days are :28\n\n");

                break;    

        default : printf("\nInvalid month\n\n");
}

return 0;
}
