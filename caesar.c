#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc == 1)
    {
        printf("yell\n");
        return 1;
    }

    else if (argc == 2)
    {

        string a = argv[1];
        int k = atoi(a);

        printf("Please enter a string: \n");
        string p = get_string();

        printf("ciphertext: ");
        for (int i = 0; i < strlen(p); i++)
        {

            // for uppercase letters
            char formula1 = (p[i] - 65 + k) % 26 + 65;

            // for lowercase letters
            char formula2 = (p[i] - 97 + k) % 26 + 97;

            // printing appropriate uppercase, lowercase or other character
            if (isupper(p[i]))
            {
                printf("%c", formula1);
            }
            else if (islower(p[i]))
            {
                printf("%c", formula2);
            }
            else
            {
                printf("%c", p[i]);
            }
        }

        printf("\n");
        return 0;
    }
}