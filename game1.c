#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int number, guess, numguess=1;
    srand(time(0));
    number = rand()%100+1  ; //1thi100 ni vacche number janrate thay

   // printf("the number is %d\n", number);

    do
    {
        printf("guess a number 1 to 100 \n");
        scanf("%d", &guess);

        if (number < guess)
        {
            printf("enter lower number plese\n");
        }

        else if (number > guess)
        {

            printf("enter higher number plese\n");
        }

        else
        {
            printf("your number is current %d\n", guess);
            printf("your number is current in  %d attempts\n", numguess);
        }
        numguess++;

    } while (number != guess);

    return 0;
}