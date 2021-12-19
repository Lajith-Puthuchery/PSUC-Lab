#include <stdio.h>

int main()
{
    int a[20][20],n,p,q,x,y,temp;
    printf("M name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the number of rows/columns of the sqaure matrix\n");
    scanf("%d",&n);
    printf("Enter the %d matrix elements\n",n*n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The original matrix is\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //Interchange of diagonals
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                temp=a[i][j];
                a[i][j]=a[i][n-1-j];
                a[i][n-1-j]=temp;
            }
        }
    }
    printf("The matrix after interchanging of primary and secondary diagonals is\n",x,y);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
