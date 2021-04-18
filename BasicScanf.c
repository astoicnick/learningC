#include <stdio.h>

main()
{
    char firstInitial;
    char lastInitial;
    int age;
    int favorite_num;

    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial);

    printf("What letter does your last name begin with?\n");
    scanf(" %c", &lastInitial);

    printf("What\'s your favorite number?\n");
    scanf(" %d", &favorite_num);

    printf("What is your age?\n");
    scanf(" %d", &age);

    return 0;
}
