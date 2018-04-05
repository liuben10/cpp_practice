/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   LinkedList.h
 * Author: benja
 *
 * Created on April 2, 2018, 9:25 PM
 */

#include <memory>
#include <iostream>

#ifndef LINKEDLIST_H
#define LINKEDLIST_H

using namespace std;

class LinkedList {
    class LLNode {
        public:
            int val;
            shared_ptr<LLNode> next;
            LLNode(int val) {
                this->val = val;
                this->next = shared_ptr<LLNode>(nullptr);
            }
    };
public:
    LinkedList();
    LinkedList(const LinkedList& orig);
    virtual ~LinkedList();
    void reverse();
    void push(int val);
    int pop();
    friend ostream& operator<<(ostream& stream, const LinkedList& ll);
    string print() const;
private:
    shared_ptr<LLNode> head;
    shared_ptr<LinkedList::LLNode> reverseHelper(shared_ptr<LinkedList::LLNode> ptr);
};

#endif /* LINKEDLIST_H */

