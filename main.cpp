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
#include "LinkedList.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    LinkedList v1 = LinkedList();
    for(int i = 0; i < 10; i++) {
        v1.push(i);
    }
    v1.reverse();

    cout << v1 << "\n";
    return 0;
}

