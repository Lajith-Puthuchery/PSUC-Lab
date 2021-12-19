#include <stdio.h>

int main()
{
    int a,b,j,flag=0;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter the limits between which the prime numbers need to be generated\n");
    scanf("%d %d",&a,&b);
    while(a<(b-1))
    {
        flag=0;
        a++;
        j=2;
        while(j < a)
        {
            if((a)%j == 0)
            {
                flag=1;
                break;
            }
            j++;
        }
        if(flag==0)
        {
            printf("%d ",a);
        }
    }
}
