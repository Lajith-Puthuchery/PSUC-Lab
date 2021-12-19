#include <stdio.h>

int main()
{
    int num;
    int prime=0,comp=0;
    int flag=0;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    do
    {
        printf("Enter a number");
        scanf("%d",&num);
        flag=0;
        if(num==1)
        {
            continue;
        }
        if(num==-1)
        {
            break;
        }
        int j=2;
        while(j<num)
        {
            if(num%j==0)
            {
                comp++;
                flag=1;
                break;
            }
            j++;
        }
        if(flag==0)
        {
            prime++;
        }
    }while(num);

    printf("The number of prime numbers are %d\n",prime);
    printf("The number of composite numbers are %d\n",comp);
    return 0;
}
