#include <stdio.h>

int main()
{
    float a,b,sum,diff,prod,quot;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter two integers");
    scanf("%f %f",&a, &b);
    sum = a+b;
    printf("%.2f + %.2f = %.2f\n",a,b,sum);
    diff = a-b;
    printf("%.2f - %.2f = %.2f\n",a,b,diff);
    prod = a*b;
    printf("%.2f * %.2f = %.2f\n",a,b,prod);
    if(b == 0)
    {
        printf("Divison by 0 is not defined");
    }
    else
    {
        quot = a/b;
        printf("%.2f / %.2f = %.2f\n",a,b,quot);
    }
    return 0;
}
