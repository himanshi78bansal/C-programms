// Pointer Call 
#include<stdio.h>
int square(int n); // Call by value 
int _square(int* n); // Call by reference

int main()
{
    int n = 4;
    square(n);         // Call by value 

    printf("%d\n",n); 

    _square(&n);  // Call by reference
    printf("%d\n\n",n);


    return 0;
}

int square (int n){    // Call by value 
    n = n * n;
    printf("\n\n%d\n",n);
}

int _square (int* n){      // Call by reference
    *n = (*n) * (*n);
    printf("\n%d\n",*n);
}