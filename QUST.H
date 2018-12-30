/* Example queue and stack programm
 * Header file (contains prototypes of functions and types declaration)
 * Protected by GNU GPL license v3 */
 
#ifndef __QUST_H_
#define __QUST_H_

/* TagList declaration  */
typedef struct tagLIST LIST;

/* List declaration */
struct tagLIST
{
  int Data;
  LIST *Next;
};

/* Queue declaration */
typedef struct
{
  int Data;
  LIST *Head, *Tail; 
} QUEUE;

/* Stack declaration */
typedef struct 
{
  int Data;
  LIST *Top;
} STACK;

/* Queue functions */
int Put( QUEUE *Q, int NewData );
int Get( QUEUE *Q, int *OldData );

/* Stack functions */
int Push( STACK *S, int NewData );
int Pop( STACK *S, int *OldData );

#endif /* __QUST_H_ */

/* END OF 'QUST.H' FILE */
 
