#include <stdio.h>

int main()
{
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    char str[100];
    int word=0;
    printf("Enter the string\n");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ' && str[i+1]!=' ')
        {
            word++;
        }
    }
    printf("The number of words in the entered sentence are %d",word+1);
    return 0;
}
