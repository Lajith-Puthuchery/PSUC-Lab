#include <stdio.h>

int main()
{
    int a[20][20],transpose[20][20];
    int m,n;
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
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            transpose[j][i]=a[i][j];
        }
    }

    printf("The original matrix is\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("The transpose matrix is\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    if(m==n)
    {
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(a[i][j]!=transpose[i][j])
                {
                    printf("The matrix is not symmetric\n");
                    exit(0);
                }
            }
        }
        printf("The matrix is symmetric");
    }
    else
    {
        printf("The matrix is not symmetric");
    }
    return 0;
}