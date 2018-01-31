#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[1])
{
    if (argc != 2)  //ensure user passes 2 cmd-line args
    {
        printf("Usage: ./caesar k\n");
        return 1;   //if they don't pass 2 args, exit the program with error message 1
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isalpha(argv[1][i]))
        {
            printf("Usage: ./vigenere k\n");
            return 1;
        }
    }
    printf("plaintext: ");
    string p = get_string();    //get a string(key) from the user, store it in p
    if (p != NULL)  //ensure p is not null
    {
        int j = 0;
        string key = argv[1];
        printf("ciphertext: ");
        for (int i = 0, n = strlen(p); i < n; i++)  //iterate over the string p
        {
            if (isalpha(p[i]))    //if string p is alphabetic, continue
            {
                if (islower(p[i]) && islower(key[j]))    //if chars in p are lower & key is lower, print lower
                {
                    printf("%c", (p[i] - 97 + key[j] - 97) % 26 + 97);
                    j++;
                }
                else if (isupper(p[i]) && isupper(key[j]))    //if chars in p are upper & key is lower, print upper
                {
                    printf("%c", (p[i] - 65 + key[j] - 65) % 26 + 65);
                    j++;
                }
                else if (islower(p[i]) && isupper(key[j]))   //if chars in p are lower & key is upper, print lower
                {
                    printf("%c", (p[i] - 97 + key[j] - 65) % 26 + 97);
                    j++;
                }
                else if (isupper(p[i]) && islower(key[j]))     //if chars in p are upper & key is lower, print upper
                {
                    printf("%c", (p[i] - 65 + key[j] - 97) % 26 + 65);
                    j++;
                }
            }
            else    //otherwise print special chars as is
            {
                printf("%c", p[i]);
            }
        }
    }
    printf("\n");   //print a newline and exit the program with code 0
    return 0;
}