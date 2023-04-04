#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef int Data;

struct node
{
    Data val;
    struct node *next;
};
typedef struct node Node;

struct Q
{
    Node *front;
    Node *rear;
};
typedef struct Q Queue;

Queue *createQueue();
void enQueue(Queue *, Data);
Data deQueue(Queue *);
bool isEmpty(Queue *);
void deleteQueue(Queue *);
 
