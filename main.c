#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global counter to keep track of the number of nodes in the linked list
int counter = 0;

// Structure for each node in the linked list
struct coNode
{
    int value;
    struct coNode *nextvalue;
};

// Function prototypes
void insertAtBeginning(struct coNode **head_ref, int new_data);
void insertAfter(struct coNode *prev_node, int new_data);
void insertAtEnd(struct coNode **head_ref, int new_data);
void printList(struct coNode *node);

// Main function
int main()
{
    struct coNode *head = NULL;
    int om, i = 1;
    char chs[20];

    printf("\n\n\t\t\t\t\t\tWELCOME TO MY PROJECT\n\n\n");

    while (i != 0)
    {
        printf("Enter your choice:\n\n\t1. Insert at the end\n\t2. Insert at the beginning\n\t3. Insert after a node\n\t4. Display the list\n\nEnter ----> ");
        scanf("%d", &om);

        switch (om)
        {
        case 1:
            int ins;
            printf("\nEnter the number to add at the end: ");
            scanf("%d", &ins);
            insertAtEnd(&head, ins);
            break;

        case 2:
            int st;
            printf("\nEnter the number to add at the beginning: ");
            scanf("%d", &st);
            insertAtBeginning(&head, st);
            break;

        case 3:
            int mid;
            printf("\nEnter the number to add after a node: ");
            scanf("%d", &mid);
            insertAfter(head, mid);
            break;

        case 4:
            printList(head);
            printf("\n\nThere are %d nodes\n", counter);
            return 0;
            break;

        default:
            printf("\nINVALID INPUT\n");
            break;
        }

        printf("\nWanna stop here? Enter 'stop'. Otherwise, type 'no': ");
        scanf("%s", chs);

        if (strcmp(chs, "stop") == 0)
            break;
        else if (strcmp(chs, "no") == 0)
            continue;
        else
            printf("\nINVALID INPUT\n");
    }

    return 0;
}

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct coNode **head_ref, int new_data)
{
    struct coNode *new_node = (struct coNode *)malloc(sizeof(struct coNode));
    new_node->value = new_data;
    new_node->nextvalue = (*head_ref);
    (*head_ref) = new_node;
}

// Function to insert a new node after a given previous node in the linked list
void insertAfter(struct coNode *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("The given previous node cannot be NULL");
        return;
    }
    struct coNode *new_node = (struct coNode *)malloc(sizeof(struct coNode));
    new_node->value = new_data;
    new_node->nextvalue = prev_node->nextvalue;
    prev_node->nextvalue = new_node;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(struct coNode **head_ref, int new_data)
{
    struct coNode *new_node = (struct coNode *)malloc(sizeof(struct coNode));
    struct coNode *last = *head_ref;
    new_node->value = new_data;
    new_node->nextvalue = NULL;

    if (*head_ref == NULL)
    {
        // If the list is empty, make the new node the head
        *head_ref = new_node;
        return;
    }

    while (last->nextvalue != NULL)
        last = last->nextvalue;

    // Insert the new node at the end
    last->nextvalue = new_node;
}

// Function to print the linked list
void printList(struct coNode *node)
{
    printf("\nStart -->");
    while (node != NULL)
    {
        printf(" %d,", node->value);
        node = node->nextvalue;
        counter++;
    }
    printf(" End");
}
