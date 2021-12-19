#include <stdio.h>

int main()
{
    float tempC, tempF;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter the temperature in Fahrenheit");
    scanf("%f",&tempF);
    tempC = (5.0/9.0)*(tempF-32);
    printf("The temprature is %.2fC in Celsius Scale",tempC);
    return 0;
}
