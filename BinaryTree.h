/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryTree.h
 * Author: benja
 *
 * Created on April 5, 2018, 9:22 PM
 */

#include <stdlib.h>
#include <memory>
#include <string>

#ifndef BINARYTREE_H
#define BINARYTREE_H

using namespace std;

class BinaryTree {
public:
    BinaryTree(int val);
    BinaryTree(const BinaryTree& orig);
    BinaryTree(BinaryTree&& orig);
    BinaryTree& operator=(const BinaryTree& right) {
        // Check for self-assignment!
        if (this == &right) // Same object?
            return *this; // Yes, so skip assignment, and just return *this.
        // Deallocate, allocate new space, copy values...
        return *this;
    }

    shared_ptr<BinaryTree> getLeft();
    shared_ptr<BinaryTree> getRight();
    int getVal();
    void setLeftB(shared_ptr<BinaryTree> left);
    void setRightB(shared_ptr<BinaryTree> right);
    void setLeft(int val);
    void setRight(int val);
    void setVal(int val);
    string print();
private:
    int val;
    shared_ptr<BinaryTree> left;
    shared_ptr<BinaryTree> right;
    string printHelper(shared_ptr<BinaryTree> tree, int padding);
};

#endif /* BINARYTREE_H */

