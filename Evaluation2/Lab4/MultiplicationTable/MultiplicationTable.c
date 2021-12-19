#include <stdio.h>

int main()
{
    int n,k;
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter the number 'n' till which the multiplication table should be generated and the term 'k' till which the table should be generated\n");
    scanf("%d%d",&n,&k);
    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<=n; j++)
        {
            printf("%d*%d = %d \t",j,i,i*j);
        }
        printf("\n");
    }
    return 0;
}
