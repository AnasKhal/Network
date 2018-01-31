#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


 int main(int argc, string argv[])
 {
    // check for 2 arguments only
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    // check if argument is all alpha char (no punct) - use loop and isalpha
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("Error\n");
            return 1;
        }
    }

    // prompt user for Word
    string Word = GetString();
    int j = 0;

    // loop through the Word. If not a letter than print unmodified.
    for (int i = 0, n = strlen(Word); i < n; i++)
    {
        // to keep looping through the key continously
        j = j % strlen(argv[1]);

        // check if the char is alpha
        if (isalpha(Word[i]))
        {
            // only 4 types of outcomes
            if (islower(Word[i]) && islower(argv[1][j]))
                printf("%c", (((Word[i] - 97) + (argv[1][j] - 97)) % 26) + 97);
            else if (isupper(Word[i]) && islower(argv[1][j]))
                printf("%c", (((Word[i] - 65) + (argv[1][j] - 97)) % 26) + 65);
            else if (islower(Word[i]) && isupper(argv[1][j]))
                printf("%c", (((Word[i] - 97) + (argv[1][j] - 65)) % 26) + 97);
            else if (isupper(Word[i]) && isupper(argv[1][j]))
                printf("%c", (((Word[i] - 65) + (argv[1][j] - 65)) % 26) + 65);
            j++;
        }
        else
        {
            printf("%c", Word[i]);
        }
    }
    printf("\n");