#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//Represent a node of the singly linked list
//typedef struct Node Node;
struct Node{
    int data;
    int isEmpty;
    struct Node *next;
} Node;
struct Node node(int data, int isEmpty) {
    struct Node node = {.data = data, .next = NULL, .isEmpty = isEmpty};
    return node;
}

//Represent the head and tail of the singly linked list
struct Node* head = NULL;
struct Node* tail = NULL;

void init() {
    struct Node* head = malloc(sizeof(struct Node));
    struct Node* tail = malloc(sizeof(struct Node));
}

//addNode() will add a new node to the list    
void addNode(int data) {    
    //Create a new node    
        //printf("Inner Head: %d\n", (*head).data);
    struct Node* newNode = malloc(sizeof(struct Node));
    *newNode = node(data, 1);
    //if(head != NULL) {
       // struct Node* headHolder = head;
   // } else {
    //    struct Node headHolder = NULL;
    //}
        //printf("Inner Head: %d\n", (*head).data);
        
    //Checks if the list is empty
    if(head == NULL) {
        //If list is empty, both head and tail will point to new node    
        head = newNode;
        tail = newNode;
        printf("None");
    } else {
        //newNode will be added after tail such that tail's next will point to newNode
        (*tail).next = newNode;
       // if(headHolder == NULL) {}else{
         //   head = headHolder;
        //}
        //printf("Inner Head: %d\n", headHolder.data);
        printf("Inner Next: %d\n", 7);//((*head).next)->data);
        printf("Inner Tail: %d\n", (*tail).data);
        //newNode will become new tail of the list    
        tail = newNode;
    }
    return;  
} 

//display() will display all the nodes present in the list    
void display() {    
    //Node current will point to head    
    struct Node* current = head;    
        
    if((*head).isEmpty == 0) {    
        printf("List is empty");
        return;
    }
    printf("Nodes of singly linked list: ");
    while(current != NULL) {
        //Prints each node by incrementing pointer    
        printf("%d ", (*current).data);    
        current = (*current).next;
    }    
    printf("\n");
}


int main() {
    init();
    printf("Node 0: %d\n", node(0, true).data);
    head = NULL;
    //printf("Head: %d, %d\n", (*head).data, (*head).isEmpty);
    tail = NULL;
    //printf("Tail: %d\n", (*tail).data);
    addNode(7);
    printf("Head: %d\n", (*head).data);
    printf("Tail: %d\n", (*tail).data);
    addNode(2);
    printf("Head: %d\n", (*head).data);
    printf("Nex: %d\n", ((*head).next)->data);
    printf("Tail: %d\n", (*tail).data);

    display();

    return 0;
}