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

    if(argc != 2)
        {
            printf("Please provide a command line argument.\n");
            return 1;
    }
else
{
    key = atoi(argv[1]);
    keycorrect = true;
}
    } while(!keycorrect);

    text = GetString();
    input_length = strlen(text);
    for(int i = 0; i < input_length; i++)
    {
        if(isalpha(text[i]))
        {

               if(isupper(text[i]))
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