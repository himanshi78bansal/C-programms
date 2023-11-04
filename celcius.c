// Convert Fahrenheit temperature to Celcius temperature
#include<stdio.h>
int main()
{
    int f;
    float c;

    printf("Enter temperature in fahrenheit :");
    scanf("%d",&f);

    c=5.0/9.0*(f-32.0);
    
    printf("Temperature in celcius is %f\n",c);

    return 0;
}