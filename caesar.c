#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please provide a valid argument");
        return 1;
    }

    int key = atoi(argv[1]);

    string text = GetString();

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if(isalpha(text[i]))
        {

        else if(islower(text[i]))
            {
           printf("%c", ((text[i] - 'a' + key) % 26) + 'A');
            }
            else
            {
                printf("%c", ((text[i] - 'a' + key) % 26) + 'a');
            }
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
    return 0;
}