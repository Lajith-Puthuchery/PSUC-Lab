#include <stdio.h>
#include <stdlib.h>

void Replace(int arr[200][200], int m, int n)
{
    int dig,sum=0,temp=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i%2==1 && j%2==1)   //Discovering Odd position with both indexes being odd//
            {
                if(arr[i][j]%2==0)  //Discovering Even number in odd position//
                {
                    sum=0;
                    while(arr[i][j])
                    {
                        dig = arr[i][j] % 10;
                        sum= sum+dig;
                        arr[i][j] /= 10;
                    }
                    arr[i][j]=sum;     //Replacing by sum of digits/
                }
            }
            else if(i%2==0 && j%2==0)  /*  Discovering Even position with both indexes being even*/
            {
                if(arr[i][j]%2==1)  /*Discovering Odd number in even position */
                {
                    temp=0;
                    while(arr[i][j])
                    {
                        dig=arr[i][j]%10;
                        temp = temp*10 + dig;
                        arr[i][j] /= 10;
                    }
                    arr[i][j]=temp;      //Replacing number by its reverse/
                }
            }
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("My Name is Saket Ranjan Jha Registration Number : 200905264 \n");
    int i , j;
    int m,n,prod=1,temp,rem;
    //Entering The Dimensions of the Matrix/
    printf("Enter the number of rows and columns of the matrix :\n");
    scanf("%d %d", &m , &n);
    int arr[m][n];
    printf("Enter Matrix Elements : \n"); /* Entering the Matrix Elements*/

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered elements:\n"); /* Displaying the Entered Matrix*/
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            temp=arr[i][j];
            while(temp!=0)
            {
                rem=temp%10;
                prod=prod*rem;
                temp=temp/10;
            }
            arr[i][j]=prod; //Replacing the Elements with the Product of digits/
              prod=1;
            }
      }
      printf("After replacing  all  by  Product  of the digits:"); /* Displaying the Replaced Matrix*/
      printf("\n");
      for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("After Function Replace: \n");
     Replace(arr,m,n);

    return 0;
}
