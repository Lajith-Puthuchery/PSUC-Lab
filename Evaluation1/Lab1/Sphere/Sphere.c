#include <stdio.h>
#include <math.h>

#define PI 3.142857

int main()
{
    int r;
    float vol, area;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter the radius of the sphere");
    scanf("%d",&r);
    vol = (4*PI*pow(r,3))/3;
    area = 4*PI*pow(r,2);
    printf("The volume of the sphere of radius %d is %f\n",r,vol);
    printf("The surface area of the sphere of radius %d is %f",r,area);

    return 0;
}
