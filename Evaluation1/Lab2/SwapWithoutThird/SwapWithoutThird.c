#include <stdio.h>

int main()
{
    int a,b;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter the two numbers to be swapped");
    scanf("%d %d",&a,&b);
    printf("Before swapping\n a = %d\n b = %d\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping\n a = %d\n b = %d",a,b);
}