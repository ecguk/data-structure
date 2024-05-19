#include "stack.h"

Stack::Stack() : LinkedList() {}

Stack::~Stack() {}

void Stack::push(int value) {
    insert(size_, value); // Stack�� Ư���� ���� ����
}

int Stack::pop() {
    int value = get(size_ - 1);
    remove(size_ - 1);
    return value;
}

int Stack::peek() {
    return get(size_ - 1);
}

Stack& Stack::operator+=(int value) {
    push(value);
    return *this;
}