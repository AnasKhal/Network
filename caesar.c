#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    bool keySuccessful = false;
    int key = 0;
    int input_length = 0;
    string text = "";

    if (argc != 2)
    {
        printf("Please provide a valid argument");
        return 1;
    }

    int key = atoi(argv[1]);

     text = GetString();
    input_length = strlen(text);
    for (int i = 0; i < input_length; i++)
    {
        if(isalpha(text[i]))
        {

        else if(isupper(text[i]))
            {
           printf("%c", ((text[i] - 'A' + key) % 26) + 'A');
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