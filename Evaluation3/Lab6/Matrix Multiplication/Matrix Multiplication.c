#include <stdio.h>
#include <math.h>

int main()
{
    int a[20][20],b[20][20],c[20][20];
    int m,n,p,q;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the dimensions of the first matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter the %d matrix elements\n",m*n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter the dimensions of the second matrix\n");
    scanf("%d %d",&p,&q);
    printf("Enter the %d matrix elements\n",p*q);
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    //Display the matrix
    printf("The first matrix is\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix is\n");
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<q; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    //Matrix Multiplication
    if(n==p)
    {
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<q; j++)
            {
                c[i][j]=0;
                for(int k=0; k<p; k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        //Display the product
        printf("The product matrix is\n");
        for(int i=0; i<m; i++)
            {
                for(int j=0; j<q; j++)
                    {
                        printf("%d ",c[i][j]);
                    }
                printf("\n");
        }
    }
    else
    {
        printf("Matrix multiplication is not compatible with the above matrices");
    }

    return 0;
}
