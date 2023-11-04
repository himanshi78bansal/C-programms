// Swap using pointer 
#include<stdio.h>
void swap (int a, int b);
void _swap (int* a, int* b);

int main()
{
    int a = 3;
    int b = 5; 

    swap(a,b);
    printf ("\n\na = %d , b = %d\n",a,b);

    _swap(&a,&b);
    printf ("\n\na = %d , b = %d\n\n\n",a,b);


    return 0;
}

// Call by value 
void swap (int a, int b)
{
    int t = a;
    a = b;
    b = t;
    printf ("\n\na = %d , b = %d\n",a,b);
}

// Call by reference  
void _swap (int* a, int*  b)
{
    int t = *a;
    *a = *b;
    *b = t;
    printf ("\n\na = %d , b = %d\n",*a,*b);
}