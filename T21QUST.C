/* Example queue and stack programm
 * Main programm file 
 * Protected by GNU GPL license v3 */

#include <stdio.h>
#include <stdlib.h>

#include "QUST.H"

QUEUE Q;
STACK S;

/* Main programm function */
void main( void )
{
  int x;

  /* Gremlin test */
  while (1)
  {
    if (rand() % 2)
    {
      if (rand() % 2)
      {    
        x = rand();  
        Put(&Q, x);
        printf("Put <- %i\n", x);
      }  
      else
        if (Get(&Q, &x))
          printf("Get -> %i\n", x);
    }  
    else
    {    
      if (rand() % 2)
      {
        x = rand();
        Push(&S, x);
        printf("Push <- %i\n", x);
      }  
      else
        if (Pop(&S, &x))
          printf("Pop -> %i\n", x); 
    }  
  }    
} /* End of 'main' function */

/* END OF 'T21QUST.C' FILE */

