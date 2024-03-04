/**
 * @file ds.h
 * @brief Header file for various data structures.
*/

#ifndef DS_H
#define DS_H

#include <stdlib.h>

/////////////////////////////
// Doubly Linked List

/**
 * @typedef DLLNode
 * @brief A doubly linked list node.
 * 
 * This structures represents a node for a doubly linked list.
 * It holds a generic data pointer, a pointer to the next node, 
 * and a pointer to the previous node.
*/
typedef struct DLLNode {
  /**
   * @brief Pointer to the data stored in the node.
   * 
   * This pointer can hold any data type as the list is generic.
  */
  void* data;

  /**
   * @brief Pointer to the next node in the doubly linked list.
  */
  struct DLLNode* next;

  /**
   * @brief Pointer to the previous node in the doubly linked list.
  */
  struct DLLNode* prev;
} DLLNode;

/**
 * @brief Create a new doubly linked list node.
 * 
 * @param value The value to assign to the new node.
 * @return The newly created doubly linked list node.
*/
DLLNode* dll_create_node(void* value);

/**
 * @brief Pushes a new node at the end of the doubly linked list.
 * 
 * @param head Double pointer to the head node of the list.
 * @param data Data to be inserted into the new node.
 */
void dll_push_back(DLLNode** head, void* data);

/**
 * @brief Pushes a new node at the beginning of the doubly linked list.
 * 
 * @param head Double pointer to the head node of the list.
 * @param data Data to be inserted into the new node.
*/
void dll_push_front(DLLNode** head, void* data);

/**
 * 
*/
void dll_delete_node(DLLNode** head, DLLNode* del_node);

/**
 * @brief Prints all nodes to the right of the given node (inclusive)
 * 
 * @param node The node to start at, the value of this node will be printed first,
 * followed by the values of the nodes to its left.
*/
void dll_print(DLLNode* node);

#endif