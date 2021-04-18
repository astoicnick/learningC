#include <stdio.h>
#include <string.h>

main()
{
    printf("What's your first initial?\n");
    char firstInitial = getchar();
    getchar();
    printf("%c", firstInitial);

    // using getch
    printf("What are your two initials?\n");
    firstInitial = getch();
    char secondInitial = getch();
    printf("\n your initials are %c %c", firstInitial, secondInitial);
}
