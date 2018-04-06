/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   BinaryTreeTest.cpp
 * Author: benja
 *
 * Created on April 5, 2018, 9:23 PM
 */

#include <stdlib.h>
#include <iostream>
#include "BinaryTree.h"

/*
 * Simple C++ Test Suite
 */

void testBinaryTree() {
    auto testTree = (new BinaryTree::BinaryTreeBuilder(15))
        ->withLeftB(
            (new BinaryTree::BinaryTreeBuilder(12))
        )
        ->withRightB(
            (new BinaryTree::BinaryTreeBuilder(23))
                ->withLeft(18)
                ->withRight(25)
        )
        ->build();
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% BinaryTreeTest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% testBinaryTree (BinaryTreeTest)" << std::endl;
    testBinaryTree();
    std::cout << "%TEST_FINISHED% time=0 testBinaryTree (BinaryTreeTest)" << std::endl;

    std::cout << "%SUITE_FINISHED% time=0" << std::endl;

    return (EXIT_SUCCESS);
}

