#include "queque.h"

int main()
{
    Queue *q = createQueue();

    if (isEmpty(q))
        printf("Coada este goala!\n");
    else
        printf("Coada nu este goala!\n");

    enQueue(q, 1);
    enQueue(q, 2);
    enQueue(q, 3);
    enQueue(q, 4);
    enQueue(q, 5);

    if (isEmpty(q))
        printf("Coada este goala!\n");
    else
        printf("Coada nu este goala!\n");
 
    while (!(isEmpty(q)))
        printf("%d ", deQueue(q));
    printf("\n");

    if (isEmpty(q))
        printf("Coada este goala!\n");
    else
        printf("Coada nu este goala!\n");

    enQueue(q, 1);

    if (isEmpty(q))
        printf("Coada este goala!\n");
    else
        printf("Coada nu este goala!\n");

    deleteQueue(q);

    return 0;
}
