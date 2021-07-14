// Linked list insertion in increasing order, discarding duplicate elements, stopping by 0.

#include <stdio.h>
#include <stdlib.h>

typedef struct mynode{
  int x;
  struct mynode *next;
} node;

node *insert_linked_list(node *head, int x){ 
  node *p, *q, *new;
  
  new = (node *)malloc(sizeof(node)); // new node for x
  new->x = x, new->next = NULL;
  
  /*** LINKED LIST IS EMPTY ***/
  if (head == NULL) 
    return new; 
  
  /*** LINKED LIST IS NONEMPTY ***/
  p = q = head; // Once p moves forward, q will be the node before p.
  
  // Case 1: x < some element of linked list
  // Traverse to get the right position for insertion.
  while(p != NULL){ 
    if (x == p->x)  // It's a duplicate element, so don't insert.
	  return head;
    else if (x < p->x){ // Insert new before p. 
      if (p == head){
        new->next = head; 
        return new;
      }
      new->next = p; 		        /* Insert before p */
      q->next = new;
      return head;
    }
    else{
      q = p;
      p = p->next; // q is the node before p.
    }
  } 
  
  // Case 2: x > all elements of linked list
  q->next = new;
  return head;
}

void print_linked_list(node *p){
  while (p!=NULL){
    printf("%d ", p->x);
    p = p->next;
  }
  printf("[end]\n");
}

int main(){
  int element;
  node *head = NULL;
  
  printf("Enter nonzero elements (0 to stop): " );
  do{
     scanf("%d", &element);
     if(element != 0)
       head = insert_linked_list(head, element);
     else
       break;
  }while(1);
  
  printf("List elements in increasing order = ");
  print_linked_list(head);
  return 1;
}

