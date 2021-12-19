#include <stdio.h>
  
int main()
{ 
    int i = 0, j = 0;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("\nBreak Statement\n");
  
    for (int i = 0; i < 5; i++) 
    {
        printf("i = %d, j = ", i);

        for (int j = 0; j < 5; j++) 
        {  
            //Break Statement
            if (j == 2)
                break;
  
            printf("%d ", j);
        }
  
        printf("\n");
    }

     i = 0, j = 0;
     printf("\nContinue Statement\n");

    for (int i = 0; i < 5; i++) 
    {
        printf("i = %d, j = ", i);

        for (int j = 0; j < 5; j++) 
        {
            // Continue Statement
            if (j == 2)
                continue;
  
            printf("%d ", j);
        }
  
        printf("\n");
    }
    return 0;
}