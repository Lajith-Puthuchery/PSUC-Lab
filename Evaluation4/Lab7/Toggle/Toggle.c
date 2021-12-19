#include <stdio.h>

int main()
{
    printf("My name is Lajith Puthuchery and registration number is 200905106\n");
    char str[100];
    printf("Enter the string\n");
    gets(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]+=32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]-=32;
        }
    }
    printf("The string after toggling the case is \n%s",str);
    return 0;
}
