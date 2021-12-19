#include <stdio.h>

int main()
{
    int num,dig,sum=0;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter a number whose generic root must be found\n");
    scanf("%d",&num);
    int orig = num;
    while(num>10)
    {
        sum = 0;
        while(num)
        {
            dig = num%10;
            sum += dig;
            num /= 10;
        }
        if(sum>10)
        {
            num=sum;
        }
        else
        {
            break;
        }
    }
    printf("Generic Root of %d is %d",orig,sum);
    return 0;
}
