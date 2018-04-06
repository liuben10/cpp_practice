/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: benja
 *
 * Created on April 2, 2018, 9:08 PM
 */

#include <cstdlib>
#include <iostream>
#include "BinaryTree.h"
#include "BinaryTreeBuilder.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//    auto testTree = (new BinaryTree::BinaryTreeBuilder(15))->build();
//    shared_ptr<BinaryTree> testTree = 
//        BinaryTreeBuilder(15)
//            .withLeft(16)
//            .withRight(17)
//            .build();
    auto testTree = BinaryTreeBuilder(15)
        .withLeftB(
            BinaryTreeBuilder(12)
            .build()
        )
        .withRightB(
            BinaryTreeBuilder(23)
                .withLeft(18)
                .withRight(25)
                .build()
        )
        .build();
    
    cout << testTree->print() << "\n";
    return 0;
}

