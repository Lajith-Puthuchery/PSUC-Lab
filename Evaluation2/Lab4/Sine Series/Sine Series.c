#include <stdio.h>

int main()
{
    float x,sum,t;
    int n;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the value of angle in degrees\n");
    scanf("%f",&x);
    printf("Enter the terms till which the series should be calculated");
    scanf("%d",&n);
    x=x*3.14159/180;
    t=x;
    sum=x;
    for(int i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }

    printf(" The value of Sin(%f) = %.4f",x,sum);
    return 0;
}
