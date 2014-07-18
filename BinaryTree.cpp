#include "BinaryTree.h"

BinaryTree::BinaryTree(TreeNode *treeNode):root(treeNode) {
    currentNode = root;
}

//insert new node as left of current
void BinaryTree::insertLeft(TreeNode *newNode){
    if (currentNode == NULL)
        return;
    currentNode->setLeft(newNode);
    currentNode = newNode;
}

//insert new node as right of current
void BinaryTree::insertRight(TreeNode *newNode){
    if (currentNode == NULL)
        return;
    currentNode->setRight(newNode);
    currentNode = newNode;
}
