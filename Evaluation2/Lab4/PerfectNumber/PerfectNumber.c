#include <stdio.h>

int main()
{
    int num,rem,sum=0;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter a number");
    scanf("%d",&num);
    for(int i=1; i<num; i++)
    {
        rem = num%i;
        if(rem==0)
        {
            sum+= i;
        }
    }
    if(sum==num)
    {
        printf("%d is a perfect number",num);
    }
    else
    {
        printf("%d is not a perfect number",num);
    }
    return 0;
}