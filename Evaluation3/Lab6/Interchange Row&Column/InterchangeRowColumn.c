#include <stdio.h>

int main()
{
    int a[20][20],b[20][20],m,n,p,q,x,y,temp;
    printf("M name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the dimensions of the matrix\n");
    scanf("%d %d",&m,&n);
    printf("Enter the %d matrix elements\n",m*n);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j]=a[i][j];

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
    printf("\nEnter row number to be exchanged : ");
    scanf("%d", &p);
    printf("\nEnter other row number to be exchanged with : ");
    scanf("%d",&q);

    //Row Exchange
    for(int i=0; i<n; i++)
    {
        temp=a[p-1][i];
        a[p-1][i]=a[q-1][i];
        a[q-1][i]=temp;
    }

    printf("The matrix after exchange of rows %d and %d is\n",p,q);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter column number to be exchanged : ");
    scanf("%d", &x);
    printf("\nEnter other column number to be exchanged with : ");
    scanf("%d",&y);

    //Column Exchange
    for(int i=0; i<m; i++)
    {
        temp=b[i][x-1];
        b[i][x-1]=b[i][y-1];
        b[i][y-1]=temp;
    }


    printf("The matrix after exchange of columns %d and %d is\n",x,y);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
