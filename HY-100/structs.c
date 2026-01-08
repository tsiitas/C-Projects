#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct list_node {
    int data;
    struct list_node *next;
};

// Function to create a new node
struct list_node* createNode(int data) {
    struct list_node* newNode = (struct list_node*)malloc(sizeof(struct list_node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main() {
    // Create nodes
    struct list_node* head = createNode(20);
    struct list_node* second = createNode(30);
    struct list_node* third = createNode(12);

    // Link the nodes
    head->next = second;
    second->next = third;

    // Print the list

    // Free the allocated memory
    free(head);
    free(second);
    free(third);

    return 0;
}

/* struct list_node {
    int data;
    struct list_node *next;
};
*/