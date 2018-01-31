#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])

{

    if (argc != 2 || argv[1] < 0)

    {
        printf("Wrong please try again!.\n");
        return 1;
    }


    int k = atoi(argv[1]);

    if (k < 1)
    {
        printf("A positive interger Please.\n");
        return 1;
    }
    else
    {

        k %= 26;
    }

    string text = GetString();

    char c, start;

    for (int i = 0, n = strlen(text); i < n; i++)
    {
        c = text[i];

        if (isalpha(c))
        {
            start = isupper (c) ? 'A' : 'a';
            printf("%c", start + (c - start + k)%26);
        }
        else
            printf("%c", c);
    }


    printf("\n");
    return 0;
}
}