#include <stdio.h>

int main()
{
    int num,sum=0,dig,fact=1;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter a number\n");
    scanf("%d",&num);
    int org = num;
    while(num)
    {
        dig = num%10;
        fact =1;
        while(dig!=1)
        {
            fact *= dig;
            dig--;
        }
        sum += fact;
        num = num/10;
    }
    if(sum == org)
    {
        printf("%d is a Strong Number",org);
    }
    else
    {
        printf("%d is not a Strong Number",org);
    }
    return 0;
}