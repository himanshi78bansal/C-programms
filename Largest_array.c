// write a program to print the largest number in an aray. 
#include<stdio.h>
void largest(int arr[3]);
int main()
{
    int arr [3]; 

    printf("\n\nEnter 1st element :");
    scanf("%d",&arr[0]);

    printf("\nEnter 2nd element :");
    scanf("%d",&arr[1]);
    
    printf("\nEnter 3rd element :");
    scanf("%d",&arr[2]);
        

    largest(arr);
}

void largest(int arr[3])
{
    if (arr[0]>arr[1])
    {
        if(arr[0]>arr[2])
        {
            printf("\nLargest is :%d\n",arr[0]);
        }
        else
        {
            printf("\nLargest is :%d\n\n",arr[2]);
        }
    }
    else     
    {
        if(arr[1]>arr[2])
        {
            printf("\nLargest is :%d\n\n",arr[1]);
        }
        else
        {
            printf("\nLargest is :%d\n\n",arr[2]);
        }
    }
}