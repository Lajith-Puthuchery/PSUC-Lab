#include <stdio.h>
int main()
{
    int a[20][20];
    int m,n,num,count=0;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the dimensions of the matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter the %d matrix elements\n",m*n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    //Display the matrix
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element to be searched and counted\n");
    scanf("%d",&num);

    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(num==a[i][j])
            {
                count++;
            }
        }
    }

    printf("The frequency of the element %d in the matrix is %d",num,count);
    return 0;
}