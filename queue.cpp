#include "queue.h"

Queue::Queue() : LinkedList() {}

Queue::~Queue() {}

void Queue::push(int value) {
    insert(size_, value); // Queue의 특성상 끝에 삽입
}

int Queue::pop() {
    int value = get(0);
    remove(0);
    return value;
}

int Queue::peek() {
    return get(0);
}

Queue& Queue::operator+=(int value) {
    push(value);
    return *this;
}