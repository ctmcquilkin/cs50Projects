#include <stdio.h>

int n = 0;
while (n <= 0)
{
  int userNumber;
  char keypressed;
  char buffer[20];
  int double num;

  printf("Please enter a positive integer: ");
  scanf(" %d", &userNumber); getchar();
  printf("The number you entered was: %d\n", userNumber);

  if (double.TryParse(userNumber, out num))
  {
    printf("Your number is an integer");
  }

  return 0;
}
