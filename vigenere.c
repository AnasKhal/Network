#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    }

    string key = argv[1];
    for(int i= 0; i < strlen(key); i++)
    {
      if(!isalpha(key[i]))
      {
          printf("Theres an error\n");
          return 1;
      }
    }

    int keyLen = strlen(key);

    printf("plaintext: ");

    string p = get_string();

    printf("ciphertext: ");

    for(int i = 0,j = 0; i < strlen(p); i++)
    {
      if(j == keyLen)
      {
        j = 0;
      }

      int keyCon;

      if(isupper(key[j]))
      {
        keyCon = key[j] - 65;
      }
      else
      {
        keyCon = key[j] - 97;
      }


        if(isupper(p[i]))
        {
          printf("%c", ((((p[i] + (keyCon)) - 65) % 26) + 65));
        }
        else if(islower(p[i]))
        {
          printf("%c", ((((p[i] + (keyCon)) - 97) % 26) + 97));
        }
        else{
          printf("%c", p[i]);
        }

        j++;
    }
          printf("\n");
          return 0;
}