#include <stdio.h>


    //Represent the node of binary tree
    typedef struct BinarySearchTree BinarySearchTree;
    typedef struct Node Node;
    struct Node{
        int data;
        Node *left;
        Node *right;
    ;};
    Node node(int data) {
        Node *null = null;
        Node node = {.data = data, .left = null, .right = null};
        return node;
    }
    //Represent the root of binary tree
    struct BinarySearchTree{
        Node root;
    ;};
    BinarySearchTree binarySearchTree(Node* root){    
        int null;
        BinarySearchTree bt = {.root = *root};
        return bt;
    }
    //factorial() will calculate the factorial of given number    
    int factorial(int num) {    
        int fact = 1;    
        if(num == 0)    
            return 1;    
        else {    
            while(num > 1) {    
                fact = fact * num;    
                num--;    
            }    
            return fact;    
        }    
    }    
    //numOfBST() will calculate the total number of possible BST by calculating Catalan Number for given key    
    int numOfBST(int key) {    
        int catalanNumber = factorial(2 * key)/(factorial(key + 1) * factorial(key));    
        return catalanNumber;    
    }    
    int main() {    
        BinarySearchTree bt;
        bt = binarySearchTree(&bt.root);
        //Display total number of possible binary search tree with key 5    
        printf("Total number of possible Binary Search Trees with given key: %d", numOfBST(5));  
        return 0; 
    }    
 