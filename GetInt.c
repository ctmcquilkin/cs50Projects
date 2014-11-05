#include <stdio.h> 
#include <ctype.h> 
#include <stdlib.h> 
#include <string.h> 

/* Get Int Source: http://faq.cprogramming.com/cgi-bin/smartfaq.cgi?id=1043284385&answer=1043372399 */

int validate ( char *a )
{
  unsigned x;
  for ( x = 0; x < strlen ( a ); x++ )
    if ( !isdigit ( a[x] ) ) return 1;
  return 0;
}

int main ( void )
{
  int i;
  char buffer[BUFSIZ];
  printf ( "Enter a number: " );
  if ( fgets ( buffer, sizeof buffer, stdin ) != NULL ) {
    buffer[strlen ( buffer ) - 1] = '\0';
    if ( validate ( buffer ) == 0 ) {
      i = atoi ( buffer );
      //printf ( "%d\n", i );
    }
    else
      printf ( "Error: Input validation\n" );
  }
  else
    printf ( "Error reading input\n" );
  //return 0;

  /* CS 50 Get Int Exercise:

  if (i >= 0 && i <= 3)
  {
    printf("You picked a small int.\n");
  }
  else if (i >= 4 && i <= 7)
  {
    printf("You picked a medium int.\n");
  }
  else if (i >= 8 && i <= 18)
  {
    printf("You picked a large int.\n");
  }
  else
  {
    printf("You picked an invalid int.\n");
  } 
*/

  /* CS 50 Mario Assignment: */
  int h;
  int k;
  int hash = i;
  for (h = 0; h < i; h++)
  {
    hash--;
    for (k = 0; k < i; k++)
    {
      if (k >= hash) 
      {
        printf("#");
      }
      else {
        printf(" ");
      }
    }
    printf("\n");
  }

}
