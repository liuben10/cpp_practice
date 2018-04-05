/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedListTest.cpp
 * Author: benja
 *
 * Created on April 2, 2018, 9:30 PM
 */

#include <stdlib.h>
#include <iostream>
#include "LinkedList.h"
/*
 * Simple C++ Test Suite
 */

using namespace std;

void test1() {
    LinkedList v1 = LinkedList();
    for(int i = 0; i < 10; i++) {
        v1.push(i);
    }
    cout << v1 << "\n";
}

void test2() {
    LinkedList v1 = LinkedList();
    for(int i = 0; i < 10; i++) {
        v1.push(i);
    }
    v1.reverse();

    cout << v1 << "\n";
}

int main(int argc, char** argv) {
    std::cout << "%SUITE_STARTING% LinkedListTest" << std::endl;
    std::cout << "%SUITE_STARTED%" << std::endl;

    std::cout << "%TEST_STARTED% test1 (LinkedListTest)" << std::endl;
    test1();
    std::cout << "%TEST_FINISHED% time=0 test1 (LinkedListTest)" << std::endl;
    
    std::cout << "%TEST_STARTED% test2 (LinkedListTest)" << std::endl;
    test2();
    std::cout << "%TEST_FINISHED% time=0 test2 (LinkedListTest)" << std::endl;
    
    return (EXIT_SUCCESS);
}

