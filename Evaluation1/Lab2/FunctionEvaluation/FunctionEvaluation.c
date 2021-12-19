#include <stdio.h>

int main()
{
    int x,y;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter the value for x");
    scanf("%d",&x);
    if(x>0)
    {
        y=1;
    }
    else if (x==0)
    {
        y=0;
    }
    else
    {
        y=-1;
    }
    printf("Y = %d",y);
    return 0;
    
}