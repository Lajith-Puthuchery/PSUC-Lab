#include <stdio.h>

int main()
{
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    int a,b,c, smallest;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a < b)
    {
        if(a<c)
        {
            smallest = a;
        }
        else
        {
            smallest = c;
        }
    }
    else
    {
        if(b < c)
        {
            smallest = b;
        }
        else
        {
            smallest = c;
        }
    }
    printf("The smallest of %d, %d and %d is %d",a,b,c,smallest);
    return 0;
}
