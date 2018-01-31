#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void)

{
 float money;

//ask user for positive amout
do

{
    money = get_float("How much is owed: ");
}

while (money < 0);

int cents = round(money * 100);

int coins=0;

while ( cents >= 10 )

{
    cents -= 10;
    coins++;
}
while ( cents >= 25 )

{
    cents -= 25;
    coins++;
}
while ( cents >= 5 )

{
    cents -= 5;
    coins++;
}
while ( cents >= 1 )

{
    cents -= 1;
    coins++;
}


printf("%i" , coins);
}