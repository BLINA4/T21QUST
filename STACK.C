 /* Example queue and stack programm
  * Stack file (cointains functions to work with stack)
  * Protected by GNU GPL license v3 */

#include <stdlib.h>

#include "QUST.H"

/* Push element to stack function */
int Push( STACK *S, int NewData )
{
  LIST *NewElement; 

  /* If malloc fails we return 0 (error) */
  if ((NewElement = (LIST*)malloc(sizeof(LIST))) == NULL)
    return 0;

  NewElement->Data = NewData;
  NewElement->Next = S->Top;
  S->Top = NewElement;

  /* No errors */
  return 1;
} /* End of 'Push' function */

/* Pop element from stack function */
int Pop( STACK *S, int *OldData )
{
  LIST *Old;

  /* If stack is empty we return 0 (no elements found) */
  if (S->Top == NULL)
    return 0;

  /* Return old data */
  *OldData = S->Top->Data;
  
  /* Deleting top element */
  Old = S->Top;
  S->Top = S->Top->Next;
  free(Old);

  /* No errors */
  return 1;
} /* End of 'Pop' function */

/* END OF 'STACK.C' FILE */
 
