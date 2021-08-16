#include<stdio.h>
#include<stdlib.h>

struct intLinkedList{
	int data;
	struct intLinkedList *next;
};
typedef struct intLinkedList node;

// Inserts a value (passed in as the char c) at the end of a list
// whose head pointer is r. It returns the head pointer
node *insert_end(node *r, int n)
{
    node *p,*q;
    p = (node *) malloc(sizeof(node));
    p->data = n;
    p ->next = NULL;
    if (r==NULL) return p;  /* list passed is empty */
    q=r; // Otherwise traverse till the end
    while (q->next!=NULL) 
        q=q->next;      
        /* find the last element */
    q->next =p;
    return r;
}

void print_list(node *head)
{
    while(head)
    {
        printf("%d ",head->data);
        head = head->next;  
    }
    printf("\n");
}

// Function to reverse the linked list
node *Reverse(node *head){
	node* current = head;
	node *prev = NULL, *after = NULL;
	while (current != NULL) 
	    {
	        after = current->next;
	        current->next = prev;
	        prev = current;
	        current = after;
	    }
	head = prev;
	return head;
}

int main()
{
    node *head=NULL;
    int i, n;
    for (i = 0; i < 5; i++)
    {
    	printf("Enter number %d: ", i);
    	scanf("%d",&n);
    	head = insert_end(head, n);
    }

    // Print before reversing
    printf("Original list:\n");
    print_list(head);

    // Reverse the list inplace
    // head = Reverse(head);
    
    // A simpler way using array
    int a[5];
    node *q=head; i=0;
    while (q!=NULL)
    {
    	a[i] = q->data;
        q=q->next;
        i++;
    }
    node *head_of_rev=NULL;
    for (i = 4; i >= 0; i--)
    {
    	head_of_rev = insert_end(head_of_rev, a[i]);
    }

    // Print after reversing
    printf("Reversed list:\n");
    print_list(head_of_rev);
}