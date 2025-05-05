#include <stdio.h>
#include <stdlib.h>

#define MAXQUEUE 12

typedef struct {
  int data[MAXQUEUE];
  int head;
  int tail;
  int size;
} Queue;

void initQueue(Queue *q) {
  q->head = 0;
  q->tail = 0;
  q->size = MAXQUEUE;
}

void enqueue(Queue *q, int x) {
  printf("enqueuing...\n");
  q->data[q->tail] = x;
  if (q->tail == q->size - 1) {q->tail = 1;} else {q->tail++;}
  printf("enqueued %d at index %d\n", x, q->tail);
}

int dequeue(Queue *q) {
  printf("dequeuing...\n");
  int x = q->data[q->head];
  if (q->head == q->tail) {
    printf("Attempted to dequeue empty queue\n"); 
    exit(1);
  }
  else if (q->head == q->size - 1) {
    q->head = 1;
  } 
  else {
    q->head++;
  } 
  printf("dequeued %d at index %d\n", x, q->head);
  return x;
}

void queueExample() {
  printf("example queue implementation:\n");
  Queue q; 
  initQueue(&q);
  enqueue(&q, 1);
  enqueue(&q, 12);
  enqueue(&q, 16);
  dequeue(&q);
  dequeue(&q);
  dequeue(&q);
  printf("\n\n");
}
