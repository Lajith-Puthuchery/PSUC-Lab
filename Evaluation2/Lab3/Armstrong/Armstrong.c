#include <stdio.h>
#include <math.h>

int main()
{
    int num,org,sum=0,dig;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter a number\n");
    scanf("%d",&num);
    org=num;
    while(num)
    {
        dig = num%10;
        sum += pow(dig,3);
        num = num/10;
    }
    if(sum == org)
    {
        printf("%d is an Armstrong Number",org);
    }
    else
    {
        printf("%d is not an Armstrong Number",org);
    }
    return 0;
}
