#include <stdio.h>

int main()
{
    int num;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter a number");
    scanf("%d",&num);
    if(num % 2 ==0)
    {
        printf("%d is an even number",num);
    }
    else
    {
        printf("%d is an odd number",num);
    }

    return 0;
}

