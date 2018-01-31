#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("INVALID\n");
        return 1;
    }

    string k = argv[1];

    //check for whether all alphabetical keys

    for(int i= 0; i < strlen(k); i++)
    {
      if(!isalpha(k[i]))
      {
          printf("Not all alphabetical\n");
          return -1;
      }
    }
      string plain = GetString();
      int counter = 0;
      char c = 'a';
      int goo = 0; //for doing ascii math in loop later
      for (int r=0; r<strlen(plain); r++){

    if (!isalpha(plain[r])){
        counter++;
        printf("%c", plain[r]); //print element if its a not a letter
    }
    else{
        //initialize
        int z = plain[r]; //convert to number
        int t = ((r - counter)%strlen(k)); //helps cycle through smaller passcode, remembers spot
        int y = k[t]; //T is for placeholder of key code relative to R for plaintext


        if (isupper(plain[r])){
            if(isupper(k[t])){
                goo = ((((z-65)+(y-65))%26)+65); //goes by plain value
                c = goo;
                printf("%c", c);

            }
            else{
                 goo = ((((z-65)+(y-97))%26)+65);
                 c = goo;
                printf("%c", c);
            }


        }
        if (islower(plain[r])){
            if(isupper(k[t])){
                goo = ((((z-97)+(y-65))%26)+97);
                c = goo;
                printf("%c", c);

            }
            else{
                goo = ((((z-97)+(y-97))%26)+97);
                c = goo;
                printf("%c", c);
            }
        }
}
}
printf("\n");
return 0;
}