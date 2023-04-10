#include<iostream>
using namespace std;

//Define the tree
struct node{
    int data;
    node* left;
    node* right;

// Iniatialize the tree
  Node(int val){

      data = val;
      left = right = NULL;
  }
}

int main(){

    // Create the root of Tree
    struct node* root = newNode(1);

   // Create the left & right child of the root
    root->left = newNode(2);
    root->right = newNode(3);

    // Create childrens of the left node at level 1
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // // Create childrens of the right node at level 1
    root->right->left = newNode(6);
    root->right->left = newNode(7);
}