#ifndef STACK_H
#define STACK_H

#include "linked_list.h"

class Stack : public LinkedList {
public:
    Stack();
    ~Stack();
    void push(int value);
    int pop();
    int peek();
    Stack& operator+=(int value);
};

#endif // STACK_H
