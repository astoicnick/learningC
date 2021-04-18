#include <stdio.h>
#define THISYEAR 2020

main()
{
    int yearBorn, age;

    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);

    if(yearBorn > THISYEAR)
    {
        printf("You haven\'t been born yet!");
    }
    else
    {
        age = THISYEAR - yearBorn;
        printf("You are %d years old!", age);
    }
}
