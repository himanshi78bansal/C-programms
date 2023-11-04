//  Pointer 
#include<stdio.h>
int main()
{
    int age = 22;
    int* ptr = &age;
    int _age = *ptr;
    
    // Address
    printf("\n\n%u\n",&age);
    printf("%u\n",ptr);
    printf("%u\n",&ptr);
    
    // Value
    printf("\n%u\n",age);
    printf("%u\n",*ptr);
    printf("%u\n\n",*(&age));

    return 0;
}
