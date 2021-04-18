#include <stdio.h>

int main()
{
    int testScores[5];
    int i;
    int testScore;
    int totalPoints = 0;

    for(i = 0; i < 5; i++)
    {
        puts("Give me score\n");
        scanf("%d", &testScores[i]);
        totalPoints += testScores[i];
    }

    printf("Your test average is: %.1f", (float)totalPoints / 5.0);
}
