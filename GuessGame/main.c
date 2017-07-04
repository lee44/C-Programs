#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c=' ';
    do
    {
    int r = 1+rand() % 101;
    int num=0;
    printf("Choose a number between 1 and 100: ");
    scanf("%i",num);

    if(num<r)
        printf("Your guess is to low");
    else if(num>r)
        printf("Your guess is to high");
    else
        printf("You guessed correctly");

    printf("Do you want to continue?(y/n)");
    scanf("%c",c);
    }while(c=='y');

    return 0;
}
