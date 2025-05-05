#include <stdio.h>
#include <stdlib.h>

#define MAX 7

typedef struct {
  int data[MAX];
  int top;
} Stack;

void initStack(Stack *s) {
  printf("initializing stack...\n");
  s->top = -1;
}

int isEmpty(Stack *s) {
  return s->top == -1;
}

int isFull(Stack *s) {
  return s->top == MAX - 1;
}

void push(Stack *s, int value) {
  printf("pushing %d to stack...\n", value); 
  if (isFull(s)) { 
    printf("Stack overflow\n"); 
    exit(1); 
  }
  s->data[++s->top] = value;
  printf("%d pushed to stack\n", value);
}

int pop(Stack *s) {
	printf("popping the stack...\n");
  if (isEmpty(s)) { 
    printf("Stack underflow\n"); 
    exit(1); 
  }
  int x = s->data[s->top--];
  printf("%d popped from stack\n", x);
  return x;
}

int peek(Stack *s) {
	printf("peeking the stack...\n");
  if (isEmpty(s)) { 
    printf("stack is empty\n"); 
    exit(1);
  }
  printf("%d is on top of the stack\n", s->data[s->top]);
  return s->data[s->top];
}

void stackExample() {
  printf("example stack implementation:\n");
	Stack s; initStack(&s);
	push(&s, 11); peek(&s);
	push(&s, 16); peek(&s);
	push(&s, 19); peek(&s);
	pop(&s); peek(&s);
	pop(&s); peek(&s);
	pop(&s);
  printf("\n\n");
}
