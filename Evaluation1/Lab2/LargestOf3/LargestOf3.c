#include <stdio.h>

int main()
{
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    int a,b,c, largest;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a > b)
    {
        if(a>c)
        {
            largest = a;
        }
        else
        {
            largest = c;
        }
    }
    else
    {
        if(b >c)
        {
            largest = b;
        }
        else
        {
            largest = c;
        }
    }
    printf("The largest of %d, %d and %d is %d",a,b,c,largest);
    return 0;
}
