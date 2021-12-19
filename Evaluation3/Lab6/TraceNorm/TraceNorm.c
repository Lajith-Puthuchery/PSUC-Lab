#include <stdio.h>
#include <math.h>

int main()
{
    int a[20][20];
    int m,n;
    int trace=0;
    float norm=0;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the dimensions of the matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter the %d matrix elements\n",n*n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("The entered matrix is\n");

    //Display the matrix
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //TraceNorm
    if(m==n)
    {
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)
                {
                    trace+=a[i][j];
                }
                norm+=pow(a[i][j],2);
            }
        }
        norm=sqrt(norm);
        printf("The trace of the matrix is %d\n",trace);
        printf("The norm of the matrix is %f",norm);
    }
    else
    {
        printf("Trace exists only for a square matrix\n");
    }
    return 0;
}
