#include <stdio.h>
#include <stdlib.h>

int main()
{
   char* str[] = "ABC  6 G TH 8 9 *** & TESTING@@@@@";

   char six = str[5];
   char eight= str[12];
   char nine= str[14];

   int num = atoi(six);
   int num2=atoi(eight);
   int num3=atoi(nine);

   printf("%i%i%i",num,num2,num3);

   return 0;
}
