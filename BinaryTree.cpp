/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryTree.cpp
 * Author: benja
 * 
 * Created on April 5, 2018, 9:22 PM
 */
#include <stdlib.h>
#include <memory>
#include <string>
#include <sstream>
#include "Util.h"
#include "BinaryTree.h"
#include <iostream>

using namespace std;

BinaryTree::BinaryTree(int val) {
    this->val = val;
    this->left = shared_ptr<BinaryTree>(nullptr);
    this->right = shared_ptr<BinaryTree>(nullptr);
}

BinaryTree::BinaryTree(const BinaryTree& orig) {
    this->val = orig.val;
    this->left = shared_ptr<BinaryTree>(orig.left);
    this->right = shared_ptr<BinaryTree>(orig.right);
}

BinaryTree::BinaryTree(BinaryTree&& orig) {
    this->left = shared_ptr<BinaryTree>(move(orig.left));
    this->right = shared_ptr<BinaryTree>(move(orig.right));
    this->val = orig.val;
}

int BinaryTree::getVal() {
    return this->val;
}
shared_ptr<BinaryTree> BinaryTree::getLeft() {
    return this->left;
}

shared_ptr<BinaryTree> BinaryTree::getRight() {
    return this->right;
}

void BinaryTree::setLeftB(shared_ptr<BinaryTree> left) {
    this->left = left;
}

void BinaryTree::setRightB(shared_ptr<BinaryTree> right) {
    this->right = right;
}

void BinaryTree::setLeft(int left) {
    this->left = shared_ptr<BinaryTree>(new BinaryTree(left));
}

void BinaryTree::setRight(int right) {
    this->right = shared_ptr<BinaryTree>(new BinaryTree(right));
}

string BinaryTree::print() {
    shared_ptr<BinaryTree> tr = shared_ptr<BinaryTree>(this);
    return this->printHelper(tr, 0);
}

string BinaryTree::printHelper(shared_ptr<BinaryTree> tr, int padding) {
    if (tr == nullptr) {
        return "";
    }
    ostringstream oss;
    oss << padToLength(padding, "-") << tr->getVal() << "\n";
    if (tr->getLeft() != nullptr) {
        oss << this->printHelper(tr->getLeft(), padding + 1);    
    }
    if (tr->getRight() != nullptr) {
        oss << this->printHelper(tr->getRight(), padding + 1);    
    }
    return oss.str();
}




