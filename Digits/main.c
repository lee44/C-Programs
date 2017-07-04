#include <stdio.h>
#include <stdlib.h>

int main()
{
    int random = 0;
    int []numbers=new int[1000];
    int count=0;
    int count_lessthantwohundered=0;

    for(int i=0;i<1000;i++)
    {
        random = 100+rand() % 1000;
        numbers[i]=r;
    }


    for(int i=0;i<1000;i++)
        if(numbers[i]<200)
            count_lessthantwohundered++;
        else if(number[i]>=200 && number[i]<=460)
            count++;

    printf("The amount of numbers between 200 and 460 are: %i",count);
    printf("The amount of numbers less than 200 are: %i",count_lessthantwohundered);



    return 0;
}
