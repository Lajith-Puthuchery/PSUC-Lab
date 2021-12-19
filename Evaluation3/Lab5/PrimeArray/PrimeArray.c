#include <stdio.h>
#include <math.h>

int main()
{
    int a[100],n;
    int flag=0;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the %d array elements\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The prime numbers in the array are\n");
    for(int i=0; i<n; i++)        //Check prime condition
    {
        if(a[i]==1)
        {
            continue;
        }
        flag=0;
        for(int j=2; j<(a[i]); j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d ",a[i]);
        }
    }   
    return 0;           
}
    
        