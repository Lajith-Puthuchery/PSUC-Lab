#include <stdio.h>
#include <math.h>

int main()
{
    int a[100],n;
    int ele,pos;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the %d array elements\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be inserted\n");
    scanf("%d",&ele);
    printf("Enter the position where %d is to be inserted\n",ele);
    scanf("%d",&pos);
    for(int i=n-1; i>=pos; i--)
    {
        a[i+1] = a[i];
    }
    a[pos]=ele;
    n=n+1;
    printf("The newly formed array after insertion of %d is\n",ele);
    for(int i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
