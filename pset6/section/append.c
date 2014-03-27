#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct node
{
    // the value to store in this node
    int n;

    // the link to the next node in the list
    struct node* next;
}
node;

node* head = NULL;

void append(int i)
{
    // get the length of the list
    int length = 0;
    
    node* ptr = head;
    
    while (ptr != NULL)
    {
        length++;
        ptr = ptr->next;
    }
    
    // append a new node at end of list
    
    // create a new node
    node* new = malloc(sizeof(node));
    
    // check for NULL
    if (new == NULL)
    {
        exit(1);
    }
    // initialize a new node     
    new->n = i;
    new->next = NULL;
    
    // insert new node at end 
    node** tail = &head;
    while(*tail != NULL)
    {
        tail = &((*tail)->next);
    }
    *tail = new;
}

int main(int argc, char* argv[])
{
    // creating list
    printf("Appending ints 0-%i onto the list...\n", SIZE - 1);
    for (int i = 0; i < SIZE; i++)
    {
        append(i);
    }
    printf("done!\n");

    // printing out list
    printf("Your list contains ");
    for (node*  ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");

    return 0;
}
