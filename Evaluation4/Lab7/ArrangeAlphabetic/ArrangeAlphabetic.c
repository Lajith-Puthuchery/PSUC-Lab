#include <stdio.h>
#include <string.h>
int main()
{
    char name[100][100],word[100];
    int n;
    printf("Enter the number of names to be sorted\n");
    scanf("%d",&n);
    printf("Enter the names to be arranged in alphabetic order\n");
    for(int i=0; i<n; i++)
    {
        scanf("%s",name[i]);
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(strcmp(name[i],name[j])>0)
            {
                strcpy(word,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],word);
            }
        }
    }
    printf("The names in alphabetic order are as follows :\n");
    for(int i=0; i<n; i++)
    {
        printf("%s",name[i]);
        printf("\n");
    }
    return 0;
}
