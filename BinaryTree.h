#ifndef BinaryTree_H
#define BinaryTree_H

#include "TreeNode.h"

class BinaryTree {
    public:
        BinaryTree(TreeNode *root = NULL);
        void insertLeft(TreeNode *newNode);//insert new node as left of current
        void insertRight(TreeNode *newNode);//insert new node as left of current
        TreeNode *getRoot(){return root;}
        TreeNode *getCurrent(){return currentNode;}
    private:
        TreeNode *root, *currentNode;
};

#endif