#include <iostream>
#include "TreeNode.h"
using namespace std;

//Printing the tree
void printTree(TreeNode<int>* root){
    cout << root->data << endl;
    for(int i=0; i<root->children.size(); i++){
        printTree(root->children[i]);
    }
}

int main{

    // Creating nodes
    TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* node1 = new TreeNode<int>(2);
    TreeNode<int>* node2 = new TreeNode<int>(3);

    // Connecting node1 and node2 with root node
    root->children.push_back(node1);
    root->children.push_back(node2);
    printTree(root);

}