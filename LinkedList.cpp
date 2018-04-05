/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.cpp
 * Author: benja
 * 
 * Created on April 2, 2018, 9:25 PM
 */

#include "LinkedList.h"
#include <exception>
#include <iostream>
#include <sstream>
#include <string.h>

using namespace std;

LinkedList::LinkedList() {
    this->head = shared_ptr<LLNode>(nullptr);
}

LinkedList::LinkedList(const LinkedList& orig) {
    shared_ptr<LLNode> iter(orig.head);
    while(iter != nullptr) {
        this->push(iter->val);
        iter = iter->next;
    }
}

LinkedList::~LinkedList() {
}

int LinkedList::pop() {
    if (this->head == nullptr) {
        throw runtime_error("Tried to pop from an empty list");
    }
    int first = this->head->val;
    this->head = this->head->next;
    return first;
}

void LinkedList::push(int elem) {
    if (this->head == nullptr) {
        this->head = shared_ptr<LLNode>(new LLNode(elem));
        return;
    }
    shared_ptr<LLNode> iter(this->head);
    while(iter->next != nullptr) {
        iter = iter->next;
    }
    iter->next = shared_ptr<LLNode>(new LLNode(elem));
}

void LinkedList::reverse() {
    reverseHelper(this->head);
    cout << this->print();
}

shared_ptr<LinkedList::LLNode> LinkedList::reverseHelper(shared_ptr<LinkedList::LLNode> ptr) {
    if (ptr->next == nullptr) {
        this->head = ptr;
        return ptr;
    } else {
        shared_ptr<LLNode> tmp = shared_ptr<LLNode>(ptr);
        shared_ptr<LLNode> reversed = reverseHelper(tmp->next);
        reversed->next = tmp;
        tmp->next = shared_ptr<LLNode>(nullptr);
        return tmp;
    }
}

string LinkedList::print() const {
    ostringstream output; 
    if (this->head == nullptr) {
        output << "[]" << "\n";
        return output.str();
    }
    shared_ptr<LinkedList::LLNode> iter(this->head);
    while(iter != nullptr) {
        output << iter->val << "->";
        iter = iter->next;
    }
    output << "[]" << "\n";
    return output.str();
}

ostream& operator<<(ostream& output, const LinkedList& ll) {
    output << ll.print();
    return output;
}


