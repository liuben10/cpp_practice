/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryTreeBuilder.h
 * Author: benja
 *
 * Created on April 6, 2018, 1:03 AM
 */

#include "BinaryTree.h"

#ifndef BINARYTREEBUILDER_H
#define BINARYTREEBUILDER_H

    class BinaryTreeBuilder {
    public:
        BinaryTreeBuilder(int val);
        BinaryTreeBuilder(const BinaryTreeBuilder& orig);
        BinaryTreeBuilder(BinaryTreeBuilder&& orig);
        BinaryTreeBuilder& withLeftB(shared_ptr<BinaryTree> leftB);
        BinaryTreeBuilder& withRightB(shared_ptr<BinaryTree> rightB);
        BinaryTreeBuilder& withLeft(int val);
        BinaryTreeBuilder& withRight(int val);
        shared_ptr<BinaryTree> build();
    private:
        shared_ptr<BinaryTree> btree;
    };

#endif /* BINARYTREEBUILDER_H */

