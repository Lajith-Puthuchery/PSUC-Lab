#include <stdio.h>

int main()
{
    int n=1;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("While Loop\n");
    printf("Break Statement\n");
    while(n!=10)
    {
        if(n==5)
        {
            break;
        }
        printf("\t%d",n);
        n++;
    }
    printf("\nContinue Statement\n");
    n=1;
    while(n!=10)
    {
        if(n==5)
        {
            n++;
            continue;
        }
        printf("\t%d",n);
        n++;
    }
    printf("\nDo While Loop\n");
    printf("Break Statement\n");
    n=1;
    do
    {
        if(n==5)
        {
            break;
        }
        printf("\t%d",n);
        n++;
    } while(n!=10);

    printf("\nContinue Statement\n");
    n=1;
    do
    {
        if(n==5)
        {
            n++;
            continue;
        }
        printf("\t%d",n);
        n++;
    } while(n!=10);
}
