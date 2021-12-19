#include <stdio.h>

int main()
{
    int a[100],n;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the %d array elements\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int large, small;
    large=a[0];
    small=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>large)
        {
            large=a[i];
        }
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("The largest number in the 1D array is %d\n",large);
    printf("The smallest number in the 1D array is %d\n",small);

    return 0;
}