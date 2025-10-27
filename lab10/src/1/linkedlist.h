// Include macros to avoid multiple inclusions
#ifndef LINKED_LIST_H
#define LINKED_LIST_H
//TODO Include necessary header files
#include <stdio.h>
#include <stdlib.h>
// TODO: Define the struct node appropriately
struct node {int data; struct node* next;};
// Avoids the need to type `struct node` each time
typedef struct node Node;
void insert(Node** ref_to_head, int num);
Node* search(Node* head, int num);
int delete(Node** ref_to_head, int num);
void reverse(Node** ref_to_head);
void print(Node* head);

// Function declarations 
//TODO: Complete the code



// TODO: Handle end of #ifndef macro
#endif
