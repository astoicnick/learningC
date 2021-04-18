#include <stdio.h>
#include <string.h>
#include "FirstHeaderFile.h"

main()
{
    int age;
    char childname[14] = "Thomas";

    printf("\n%s have %d kids.\n", FAMILY, KIDS);

    age = 11;
    printf("The oldest, %s, is %d years old.\n", childname, age);

    strcpy(childname, "Christopher");
    age = 6;
    printf("The middle child, %s, is %d years old", childname, age);

    return 0;
}
