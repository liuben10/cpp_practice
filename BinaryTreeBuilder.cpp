/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryTreeBuilder.cpp
 * Author: benja
 * 
 * Created on April 6, 2018, 1:03 AM
 */
#include <memory>
#include <stdlib.h>
#include "BinaryTree.h"

#include "BinaryTreeBuilder.h"

using namespace std;

BinaryTreeBuilder::BinaryTreeBuilder(int val) :
    btree(shared_ptr<BinaryTree>(new BinaryTree(val))) {
}

BinaryTreeBuilder::BinaryTreeBuilder(const BinaryTreeBuilder& orig) :
    btree(shared_ptr<BinaryTree>(orig.btree))
{
}

BinaryTreeBuilder& BinaryTreeBuilder::withLeftB(shared_ptr<BinaryTree> leftB) {
    this->btree->setLeftB(leftB);
    return *this;
}
        
BinaryTreeBuilder& BinaryTreeBuilder::withRightB(shared_ptr<BinaryTree> rightB) {
    this->btree->setRightB(rightB);
    return *this;
}

BinaryTreeBuilder& BinaryTreeBuilder::withLeft(int val) {
    this->btree->setLeft(val);
    return *this;
}
 
BinaryTreeBuilder& BinaryTreeBuilder::withRight(int val) {
    this->btree->setRight(val);
    return *this;
}

shared_ptr<BinaryTree> BinaryTreeBuilder::build() {
    return this->btree;
}


