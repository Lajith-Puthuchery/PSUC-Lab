#include <stdio.h>

int main()
{
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    int a=30, b=10, c=5, d=15;
    int exp1, exp2, exp3, exp4;
    exp1 = (a+b)*c/d;
    printf("The result of the expression (a+b)*c/d is %d\n",exp1);
    exp2 = ((a+b)*c)/d;
    printf("The result of the expression ((a+b)*)c/d is %d\n",exp2);
    exp3 = a + (b*c)/d;
    printf("The result of the expression a+(b*c)/d is %d\n",exp3);
    exp4 = (a+b)*(c/d);
    printf("The result of the expression (a+b)*(c/d) is %d\n",exp4);

    return 0;
}