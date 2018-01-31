#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
  {
      n = get_int("height: ");
  }

  while (n < 0 || n > 23);
//print evry line
   for (int l = 0; l < n;l++)
    {
        //print spaces for left
        int i = 0;
        while(i < n-l-1)
        {
            printf(" ");
            i++;
        }

        //on left
        int j = 0;
        while(j < l+1)
        {
            printf("#");
            j++;
        }
        //2 spaces
        printf("  ");
        //on right
        int h = 0;
        while(h < l+1)
        {
            printf("#");
            h++;
        }
        // new line
        printf("\n");
    }
}