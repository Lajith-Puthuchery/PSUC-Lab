#include <stdio.h>

int largest(int num, int big)
{
    if(num>big)
    {
        big=num;
    }
    return big;
}

int main()
{
    int n,num,big;
    printf("My name is Lajith Puthuchery and registartion number iss 200905106\n");
    printf("Enter the number of numbers 'n'\n");
    scanf("%d",&n);
    printf("Enter the %d numbers\n",n);
    scanf("%d",&big);
    for(int i=2; i<=n; i++)
    {
        scanf("%d",&num);
        big = largest(num,big);
    }
    printf("The largest number out of the %d numbers is %d\n",n,big);
    return 0;
}
