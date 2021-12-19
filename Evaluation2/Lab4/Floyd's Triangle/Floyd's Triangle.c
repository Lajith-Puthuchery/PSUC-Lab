#include <stdio.h>

int main()
{
    int n,m=1;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the value for n for Floyd's Triangle\n");
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i ; j++)
        {
            printf("%d\t",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}