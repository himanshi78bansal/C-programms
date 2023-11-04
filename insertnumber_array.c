// Insert an element at the end of an array.  
#include<stdio.h>
int main()
{
    int arr[5] = {1,2,3,4,5};
    int* ptr = &arr[5];

    printf("\n\narray : ");
    for (int i = 0; i<5; i++)
    printf("%d\t",arr[i]);
        
    int n;
    printf("\n\nEnter new number to add : ");
    scanf("%d",&n);
    
    *(ptr) = n;

    printf("\nNew array : ");
    for (int i = 0; i<=5; i++)
    printf("%d\t",arr[i]);
    printf("\n\n");
    return 0;
}
