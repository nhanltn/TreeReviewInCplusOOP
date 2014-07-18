#include <iostream>
#include "BinaryTree.h"

using namespace std;

void preorderTravel(TreeNode*);
void inorderTravel(TreeNode*);
void postorderTravel(TreeNode*);

int main(){
 
    cout << "=====================Binary Tree Review==================" << endl;   
    
    TreeNode *r;
    r = new TreeNode('A');
    cout << r << "/" << (*r).getData() << endl;
    
    BinaryTree tree(r);
    r = tree.getRoot();
    
    cout << r << "/" << (*r).getData() << endl;
    
    TreeNode *p, *q;
    p = new TreeNode('B');
    q = new TreeNode('C');
    r->setLeft(p);
    r->setRight(q);
    
    r = tree.getRoot()->getLeft();
    p = new TreeNode('D');
    q = new TreeNode('E');
    r->setLeft(p);
    r->setRight(q);
    
    r = tree.getRoot()->getRight();
    p = new TreeNode('F');
    q = new TreeNode('G');
    r->setLeft(p);
    r->setRight(q);
    
    preorderTravel(tree.getRoot());
    inorderTravel(tree.getRoot());
    postorderTravel(tree.getRoot());
}

void preorderTravel(TreeNode *treeNode){
    if (treeNode == NULL)
        return;
    
    cout << treeNode->getData() << endl;
    preorderTravel(treeNode->getLeft());
    preorderTravel(treeNode->getRight());
}

void inorderTravel(TreeNode *treeNode){
    if (treeNode == NULL)
        return;
    
    inorderTravel(treeNode->getLeft());
    cout << treeNode->getData() << endl;
    inorderTravel(treeNode->getRight());
}

void postorderTravel(TreeNode *treeNode){
    if (treeNode == NULL)
        return;
    
    postorderTravel(treeNode->getLeft());
    postorderTravel(treeNode->getRight());
    cout << treeNode->getData() << endl;
}