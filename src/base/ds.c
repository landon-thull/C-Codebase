#include "ds.h"
#include <stdio.h>

/////////////////////////////
// Doubly Linked List

DLLNode* dll_create_node(void* value) {
  DLLNode* result = malloc(sizeof(DLLNode));
  result->data = value;
  result->next = NULL;
  result->prev = NULL;
  return result;
}

void dll_push_back(DLLNode** head, void* data) {
  DLLNode* new_node = dll_create_node(data);

  DLLNode* temp = *head;

  if (*head == NULL) {
    new_node->prev = NULL;
    *head = new_node;
    return;
  }

  while(temp->next != NULL) {
    temp = temp->next;
  }

  temp->next = new_node;

  new_node->prev = temp;
}

void dll_push_front(DLLNode** head, void* data) {
  DLLNode* new_node = dll_create_node(data);
  
  if (*head == NULL) {
    *head = new_node;
    return;
  }

  (*head)->prev = new_node;
  new_node->next = *head;
  *head = new_node;
}

void dll_delete_node(DLLNode** head, DLLNode* del_node) {
  if (*head == NULL || del_node == NULL) {
    return;
  }

  if (*head == del_node) {
    *head = del_node->next;
  }

  if (del_node->next != NULL) {
    del_node->next->prev = del_node->prev;
  }

  if (del_node->prev != NULL) {
    del_node->prev->next = del_node->next;
  }

  free(del_node);
}

void dll_print(DLLNode* node) {
  if (node == NULL) {
    printf("(null)\n");
  }

  while (node != NULL) {
    if (node->next != NULL) {
      printf("%d <-> ", node->data);
    } else {
      printf("%d\n", node->data);
    }

    node = node->next;
  }
}