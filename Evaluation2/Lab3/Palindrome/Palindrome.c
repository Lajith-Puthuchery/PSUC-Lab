#include <stdio.h>

int main()
{
    int num,dig,rev=0;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter the number\n");
    scanf("%d",&num);
    int org = num;
    while(num)
    {
        dig = num%10;
        rev = rev*10 + dig;
        num = num/10;
    }
    printf("The reversed number is %d\n",rev);
    if(org == rev)
    {
        printf("%d is a palindrome number",org);
    }
    else
    {
        printf("%d is not a palindrome number",org);
    }
    return 0;
}