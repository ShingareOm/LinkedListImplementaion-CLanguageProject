# Singly Linked List in C 👋🤟

This C program implements a singly linked list data structure to manage a list of integers. The user can perform various operations on the linked list, including inserting elements at the beginning, in the middle, and at the end, as well as displaying the list.

## Table of Contents

- [How to Use](#how-to-use)
- [Code Explanation](#code-explanation)
- [Function Descriptions](#function-descriptions)
- [Note](#note)
- [Owner](#owner)

## How to Use

1. Compile the program using a C compiler.
2. Run the compiled executable.
3. Follow the on-screen instructions to interact with the linked list.

## Code Explanation

The C code defines a structure `coNode` to represent each node in the singly linked list. It contains two fields:
- `value`: An integer to store the data of the node.
- `nextvalue`: A pointer to the next node in the linked list.

The program provides the following functions to manipulate the linked list:
1. `insertAtBeginning(struct coNode **head_ref, int new_data)`: Inserts a new node with the given data at the beginning of the linked list.
2. `insertAfter(struct coNode *prev_node, int new_data)`: Inserts a new node with the given data after the specified previous node in the linked list.
3. `insertAtEnd(struct coNode **head_ref, int new_data)`: Inserts a new node with the given data at the end of the linked list.
4. `printList(struct coNode *node)`: Displays the elements of the linked list along with the total number of nodes.

The `main` function provides a simple user interface to perform operations on the linked list. Users can choose to insert elements at the beginning, in the middle, or at the end of the list, and also display the list.

## Function Descriptions

1. `insertAtBeginning(struct coNode **head_ref, int new_data)`: Inserts a new node with the given data at the beginning of the linked list.
2. `insertAfter(struct coNode *prev_node, int new_data)`: Inserts a new node with the given data after the specified previous node in the linked list.
3. `insertAtEnd(struct coNode **head_ref, int new_data)`: Inserts a new node with the given data at the end of the linked list.
4. `printList(struct coNode *node)`: Displays the elements of the linked list along with the total number of nodes.

## Note

Please make sure to handle memory deallocation (freeing) appropriately, especially in a larger implementation, to prevent memory leaks. This simple example code does not include memory deallocation for brevity.

## Owner 😎👍

- Name: Om Shingare
- GitHub Profile: [ShingareOm](https://github.com/ShingareOm)