#include <stdio.h>
#include "GetInt.c"

int n = 0;
while (n <= 0)
{
  char keypressed;
  char buffer[20];
  int double num;

  do
  {
    printf("Please enter the pyramid's height: ");
    scanf(" %d", &userNumber); getchar();
 
  } while (%d < 23 || %d <= 0); 

  if (userNumber => 23 || userNumber > 0)
  {
    int row = userNumber;
    for (i=0; i < row; i++)
    {
      int character = userNumber;
      for (i=0; i < character; character++)
      {
          if (character == userNumber)
          {
            userNumber--;
            printf("/n");
            break;
          } else if (character < (userNumber - 2)) {
            printf(" ");
          } else {
            printf("#");
          }
      }
    }
     
  } else {
    printf("Please enter a number between 0 and 23");
}

  return 0;
}
