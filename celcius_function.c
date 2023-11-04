// Convert Fahrenheit temperature in celcirs using function 
#include<stdio.h>
float temp(int far);

int main()
{
    int far; 
    float cel; 
    printf("\n\nEnter Temperature in Fahrenheit :");
    scanf("%d",&far);
    cel = temp(far);

    printf("\nTemperature in celcius is : %f\n\n",cel);

    return 0;
}
float temp(int far){
    float cel = 5.0/9.0 * (far - 32.0) ;
    return cel; 
}