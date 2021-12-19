#include <stdio.h>

int main()
{
    int a[100],n;
    int i,j;
    int temp;
    char x;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the %d array elements\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter 'a' to arrange the array in ascending order and 'd' to arrange in descending order\n");
    scanf(" %c",&x);
    for (i=0; i<n-1; i++)
        {
            for (j=0; j<n-i-1; j++) 
                {
                    if (a[j] > a[j+1])
                    {
                        temp =a[j];
                        a[j]=a[j+1];
                        a[j+1]=temp;
                    }
                }
        }    
    switch(x)
    {
        case 'a':
            printf("The array in ascending order is:\n");
            for(int i=0; i<n; i++)
            {
                printf("%d ",a[i]);
            }
            break;
        case 'd':
            printf("The array in descending order is:\n");
            for(int i=n-1; i>0; i--)
            {
                printf("%d ",a[i]);
            }
            break;
        default:
            break;
    }
    return 0;
}