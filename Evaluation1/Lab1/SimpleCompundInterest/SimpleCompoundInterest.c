#include <stdio.h>
#include <math.h>

int main()
{
    int n,r;
    float si,ci,p;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter the principal amount, time period and rate of interest respectively");
    scanf("%d %d %d",&p,&n,&r);
    si = (p*n*r)/100;
    ci = p*pow(1+r/100,n)-p;
    printf("The Simple Interest is %f\n",si);
    printf("The Compound Interest is %f",ci);

    return 0;
}
