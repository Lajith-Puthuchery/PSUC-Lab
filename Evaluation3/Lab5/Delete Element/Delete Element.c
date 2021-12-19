#include <stdio.h>

int main()
{
    int a[20],n;
    int num,pos=-1;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the %d array elements\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number that you want to delete\n");
    scanf("%d",&num);
    //Linear Search
    for(int i=0; i<n; i++)
    {
        if(num==a[i])
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        printf("The element does not exist in the array and hence the array stays as it is\n");
        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
        for(int i=pos; i<n; i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
        printf("The array after deletion of %d is\n",num);
        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    }
}