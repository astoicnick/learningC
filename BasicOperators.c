#include <stdio.h>

main()
{
    float a = 19.0;
    float b = 5.0;
    float floatAnswer;
    int x = 19;
    int y = 5;
    int intAnswer;

    floatAnswer = a / b;
    printf("%.1f divided by %.1f = %.1f\n", a, b, floatAnswer);

    // Prints a floating quotient of ints
    floatAnswer = x / y;
    printf("%d / %d = %.1f\n", x, y, floatAnswer);
    // Prints an int quotient of floating nums
    intAnswer = a / b;
    printf("%.1f / %.1f = %d", a, b, intAnswer);

    return 0;
}
