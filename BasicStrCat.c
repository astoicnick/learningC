#include <stdio.h>
#include <string.h>
#include <ctype.h>

main()
{
    char city[15];
    char state[3];
    char fullAddy[18] = "";

    puts("What city are you in?");
    gets(city);

    puts("What state are you in?\nAnswer in XX");
    gets(state);

    strcat(fullAddy, city);
    strcat(fullAddy, ", ");
    strcat(fullAddy, state);

    puts("\nYou live in:");
    puts(fullAddy);

    return 0;
}
