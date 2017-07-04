#include <stdio.h>
#include <stdlib.h>

int main()
{
  char str[20];
  int i;
  printf("Enter a string: ");
  scanf("%s",str);

  //Below prints the whole string to uppercase
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]>=97&&str[i]<=122)
        str[i]=str[i]-32;
  }

  //Below Prints the whole String to lowercase
  for(i=0;i<=strlen(str);i++)
  {
    if(str[i]>=65&&str[i]<=90)
        str[i]=str[i]+32;
  }

  printf("\nThe string in lowercase is: %s",str);
  printf("\nThe string in uppercase is: %s",str);

  return 0;

    return 0;
}
