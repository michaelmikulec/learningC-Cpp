#ifndef QUEUE_H 
#define QUEUE_H 

#define MAXQUEUE 12

typedef struct {
  int data[MAXQUEUE];
  int head;
  int tail;
  int size;
} Queue;

void initQueue(Queue *q);
void enqueue(Queue *q, int x);
int dequeue(Queue *q);
void queueExample(); 

#endif
