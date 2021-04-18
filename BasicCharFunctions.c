#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Checks if the entered password has
an uppercase letter, a lowercase letter, and
a digit.
*/

main()
{
    int i;
    int hasUpper, hasLower, hasDigit = 0;
    char password[25];

    printf("What\'s your password?\n");
    scanf(" %s", password);

    for (i = 0; i < strlen(password); i++)
    {
        if(isdigit(password[i]))
        {
            hasDigit = 1;
            continue;
        }
        if(isupper(password[i]))
        {
            hasUpper = 1;
            continue;
        }
        if(islower(password[i]))
        {
            hasLower = 1;
            continue;
        }
    }

    if(hasDigit && hasUpper && hasLower)
    {
        printf("Your password was ON LOCK");
    }
    else
    {
        printf("That password is weak, bro");
    }
}
