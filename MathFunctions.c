#include <stdio.h>
#include <math.h>

main()
{
    float num1 = 5.5;
    // round down
    printf("%.1f rounded down = %.1f \n", num1, floor(num1));
    // round up
    printf("%.1f rounded up = %.1f \n", num1, ceil(num1));
    // floating abs value
    printf("The absolute value of -%.1f is %.1f \n", num1, fabs(-num1));
   // sqrt and powers, should print 9
    int threeSquared = pow(3.0 ,2);
    printf("The square root of 3 squared is: %.1f", sqrt(threeSquared));

   return 0;
}
