#include <stdio.h>
#include <math.h>

int main()
{
    int z;
    float a,b,c,disc, root1, root2,x,img,real;
    printf("My name is Lajith Puthuchery and Registration Number is 200905106\n");
    printf("Enter the values for a, b and c");
    scanf("%f %f %f",&a,&b,&c);
    disc = b*b - 4*a*c;
    x = sqrt(fabs(disc));
    if(disc > 0)
    {
        z=1;
    }
    else if (disc == 0)
    {
        z=2;
    }
    else
    {
        z=3;
    }

    switch(z)
    {
        case 1:
            printf("The quadratic equation has 2 real and distinct roots\n");
            root1 = -b/(2*a) + x/(2*a);
            root2 = -b/(2*a) - x/(2*a);
            printf("r1 = %f\nr2 = %f\n",root1,root2);
            break;
        case 2:
            printf("The quadratic equation has 2 real and equal roots\n");
            root1 = -b/(2*a);
            root2 = root1;
            printf("r1 = %f\nr2 = %f\n",root1,root2);
            break;
        case 3:
            printf("The quadratic equation has 2 imaginary roots\n");
            real = -b/(2*a);
            img = x/(2*a);
            printf("r1 = %f + i%f\nr2 = %f - i%f\n",real,img,real,img);
            break;
        default:
            break;
    }
    return 0;
}
