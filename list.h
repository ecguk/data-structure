#ifndef LIST_H
#define LIST_H

#include "linked_list.h"

class List : public LinkedList {
public:
    List();
    ~List();
    void insert(int index, int value);
    int get(int index);
    void remove(int index);
    void print();
};

#endif // LIST_H