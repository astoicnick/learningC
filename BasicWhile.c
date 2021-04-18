#include <stdio.h>

main()
{
    int counter = 0;
    while(counter < 5)
    {
        printf("Num is %d.\n", ++counter);
    }
    while (counter > 1)
    {
        printf("Num is %d.\n", --counter);
    }
    return 0;
}
