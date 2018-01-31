#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
 int main(int argc, string argv[]){
     if (argc < 2 || argc > 2){
         printf("usage: ./vigenere <keyword> \n");
         return 1;
     }
     string keyw = argv[1];
     int u = strlen(keyw);
     int key[u];
     // generates encryptiion array
     for (int i = 0; i<u; i++){
         if (isalpha(keyw[i])){
             if (islower(keyw[i])){
                 key[i] = keyw[i]-97;
             }
             else {
                 key[i] = keyw[i]-65;
             }
         }
         else {
            printf("usage: ./vigenere <keyword> \n");
         return 1;
         }
     }
     string cipher = GetString();
     int k = strlen(cipher);
     int crypt[k];
     int symbol = 0;
        for (int i = 0; i < k; i++){
            // passes all symbols directly into the array
         if ((90<cipher[i] && cipher[i]<97) || cipher[i]<65 || cipher[i]>122){
         crypt[i]= cipher[i];
         symbol++;
         }
         int change = 0;

           if (symbol == 0){
            change = key[i%u];
           } else{
            change = key[((i%u)-1-symbol)%u];
           }
         //checks for uppercase letters and encrypts them
         if (64<cipher[i] && cipher[i]<91){
          if ((90-cipher[i])<change){
           int tp3= change - ((90-cipher[i])% change);
           crypt[i]= (64+tp3);
          }
          else {
           crypt[i]= (cipher[i]+change);
          }
         }
          //checks for lowercase letters and encrypts them
         else if (96<cipher[i] && cipher[i]<123){
          if ((122-cipher[i])<change){
           int tp2= change - ((122-cipher[i])% change);
           crypt[i]= (96+tp2);
          }
          else {
           crypt[i]= (cipher[i]+change);
          }
         }

     }
     for (int i =0; i < k; i++){
        printf("%c", crypt[i]);
    }
    printf("\n");
     return 0;
}