#include <stdio.h>

int CornerSum(int a[20][20], int m, int n)
{
    int sum=0;
    sum = a[0][0]+a[0][n-1]+a[m-1][0]+a[m-1][n-1];
    return sum;
}

int main()
{
    int a[20][20];
    int m,n,sum;
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
    printf("The entered matrix is\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    if(m==1||n==1)
    {
        printf("The matrix does not have 4 corner elements");
        exit(0);
    }
    sum=CornerSum(a,m,n);
    printf("The sum of the corner elements of the matrix is %d",sum);
    return 0;
}
