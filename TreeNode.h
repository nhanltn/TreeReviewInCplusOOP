#ifndef TreeNode_H
#define TreeNode_H

#include <cstddef>

class TreeNode {
    public:
        TreeNode() {    data = 0; left = NULL; right = NULL;}
        TreeNode(char c) {    data = c; left = NULL; right = NULL;}
        char getData(){return data;};
        void setData(char i){ this->data = i;}
        TreeNode *getLeft(){ return left;}
        void setLeft(TreeNode *newNode){left = newNode;}
        TreeNode *getRight(){return right;};
        void setRight(TreeNode *newNode){right = newNode;};
        
    private:
        char data;
        TreeNode *left, *right;
};

#endif