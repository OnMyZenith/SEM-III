//Given a Queue Q, write a method that will find the max element in the queue. You may only use queue operations such as
//eneque(Q,x): inserts new element x in queue Q dequeue(Q): deletes and returns first element of queue Q. size(Q): returns number of elements in queue Q;
//No other data structure can be used other than queues. Queue must remain intact after finding the max. Do not write codes for enqueue, dequeue, size functions. Only write code/algorithm maxElement(Q) w

#include <stdio.h>
#include <stdlib.h>

void enqueue(struct Queue *Q, int x);

int dequeue(struct Queue *Q);

int size(struct Queue *Q);

int maxElement(struct Queue *Q) {
    int max = dequeue(Q);
    int temp = max;
    while (size(Q) > 0) {
        temp = dequeue(Q);
        if (temp > max)
            max = temp;
    }
    enqueue(Q, temp);
    return max;
}
