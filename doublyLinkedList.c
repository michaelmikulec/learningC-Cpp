#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct DLLNode {
  int key;
  struct DLLNode* prev;
  struct DLLNode* next;
} DLLNode;

DLLNode* initNode(int key) {
  DLLNode* dllNode;
  dllNode->key  = key;
  dllNode->prev = NULL;
  dllNode->next = NULL;
  return dllNode;
}

typedef struct {
  DLLNode* head;
  DLLNode* tail;
} DLL;

DLL* initDLL(void) {
  DLL* dll; 
  dll->head = NULL;
  dll->tail = NULL;
  return dll;
}

bool isEmpty(DLL* dll) {
  if (dll->head == NULL && dll->tail == NULL) {
    return true;
  } else {
    return false;
  }
}

void addNode(DLL* dll, int key) {
  if (isEmpty(dll)) {
    DLLNode* dllNode = initNode(key);
    dllNode->key = key;
    dll->head = dllNode;
    dll->tail = dllNode;
  }
}

int main(void) {
  DLL* dll = initDLL();
  if (isEmpty(dll)) {printf("empty dll\n");}
  addNode(dll, 13);
  return 0;
}
