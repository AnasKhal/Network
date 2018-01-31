#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }

    int x = atoi(argv[1]);
    //printf("integer is %i\n", x);

    printf("plaintext: ");
    string ptext = get_string();
    //printf("text is: %s\n", ptext);

    for (int i = 0, n = strlen(ptext); i < n; i++)
    {
        if (ptext[i] == ' ')
        {
            ptext[i] = ptext[i];
        }
        else if (isalpha(ptext[i]))
        {
            if (isupper(ptext[i]))
            {
                ptext[i] = (ptext[i] - 65 + x) % 26 + 65;
            }
             if (islower(ptext[i]))
            {
                ptext[i] = (ptext[i] - 97 + x) % 26 + 97;
            }
        }
        else
        {
            ptext[i] = ptext[i];
        }
    }
    printf("ciphertext: %s", ptext);
    printf("\n");
    return 0;
}
else{
printf("%c",(char)c);
}
}
}
else{
printf("%c",s[i]);
}
}
printf("\n");

}

}