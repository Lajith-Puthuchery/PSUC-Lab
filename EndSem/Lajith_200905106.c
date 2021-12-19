#include <stdio.h>

void Replace(int mat[100][100], int m, int n)
{
    int right_digit,sum=0,rev=0;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i%2==1 && j%2==1)   //Odd position where both indexes are odd
            {
                if(mat[i][j]%2==0)  //Even number in odd position
                {
                    sum=0;
                    while(mat[i][j])      
                    {
                        right_digit = mat[i][j] % 10;    //Extracting each digit and finding sum
                        sum+=right_digit;
                        mat[i][j] /= 10;
                    }
                    mat[i][j]=sum;     //Replace by sum of digits;
                }
            }
            else if(i%2==0 && j%2==0)  //Even position where both indexes are even
            {
                if(mat[i][j]%2==1)  //Odd number in even position
                {
                    rev=0;
                    while(mat[i][j])
                    {
                        right_digit=mat[i][j]%10;
                        rev = rev*10 + right_digit;         //Extracting each digit and then reversing the number
                        mat[i][j] /= 10;
                    }
                    mat[i][j]=rev;      //Replace number by its reverse
                }
            }
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    int mat[100][100];
    int m,n,right_dig,prod=1;
    //Enter the matrix dimensions
    printf("Enter the size of matrix\n");
    scanf("%d %d",&m,&n);
    //Input the matrix elements
    printf("Enter the elements\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    //Display the inputted matrix
    printf("Entered elements:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    //Replace number by product of digits
    printf("After replacing all by Product of the digits:\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            prod=1;
            while(mat[i][j])
            {
                right_dig = mat[i][j]%10;
                prod *= right_dig;
                mat[i][j]/= 10;
            }
            mat[i][j] = prod;
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
    printf("After function Replace:\n");
    Replace(mat,m,n);  //Function call for replace
    return 0;
}