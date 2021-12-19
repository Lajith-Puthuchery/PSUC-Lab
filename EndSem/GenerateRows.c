#include <stdio.h>
#include <string.h>

void generateAROW(int r, int nr, char rowstr[10][20])
{
    for(int i=1; i<=nr-r; i++)
    {
        printf("   ");
    }
    for(int k=1;k<=r; k++)
    {
        printf("%s ",rowstr[k-1]);
    }
    for(int j=r-1; j>=1; j--)
    {
        printf("%s ",rowstr[j-1]);
    }

    printf("\n");
}

int main()
{
    int nr,n;
    char rowstr[10][20]={"On","Tw","Th","Fo","Fi","Si","Se","Ei","Ni","Te"};
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    printf("Enter number of rows in the pyramid\n");
    scanf("%d",&nr);
    for(int r=1; r<=nr; r++)
    {
        generateAROW(r,nr,rowstr);
    }
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n==0)
    {
        for(int r=1; r<=nr; r++)
        {
            generateAROW(r,nr,rowstr);
        }
    }
    else if(n>=1 && n<=nr)
    {
        generateAROW(n,nr,rowstr);
    }
    else
    {
        for(int r=1; r<=nr; r++)
        {
            generateAROW(r,nr,rowstr);
        }
        for(int x=nr; x>=1; x--)
        {
            generateAROW(x,nr,rowstr);
        }
    }
    return 0;
}
