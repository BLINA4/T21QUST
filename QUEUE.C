/* Example queue and stack programm
 * Queue file (cointains functions to work with queue)
 * Protected by GNU GPL license v3 */

#include <stdlib.h>

#include "QUST.H"

/* Put value to queue function */
int Put( QUEUE *Q, int NewData )
{
  LIST *NewElement; 
  
  /* If malloc fails we return 0 (error) */
  if ((NewElement = (LIST*)malloc(sizeof(LIST))) == NULL)
    return 0;

  NewElement->Data = NewData;
  NewElement->Next = NULL;

  /* If queue is empty we add head and tail as new element */
  if (Q->Head == NULL)
    Q->Head = Q->Tail = NewElement;
  /* If it's not empty we add new element to the tail */
  else
    Q->Tail->Next = NewElement, Q->Tail = NewElement;

  /* No errors */
  return 1;
} /* End of 'Put' function */

/* Get value from queue function */
int Get( QUEUE *Q, int *OldData )
{
  LIST *Old;

  /* If queue is empty there is also no data */
  if (Q->Head == NULL)
    return 0;
  
  /* Return old data */
  *OldData = Q->Head->Data;
  
  /* Free the head element and move pointer */
  Old = Q->Head;
  Q->Head = Q->Head->Next;
  free(Old);

  /* No errors */
  return 1;    
} /* End of 'Get' function */

/* END OF 'QUEUE.C' FILE */

