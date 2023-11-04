// Calculate GST using function 
#include<stdio.h>
void price(float value);
int main()
{
    float value = 100.0;
    printf("\n\nEnter a value :");
    scanf("%f",&value);

    price(value);

    return 0;
}

void price(float value){
    value = value + (0.18 * value);
    printf("\nFinal value is : %f\n\n",value);
    }
