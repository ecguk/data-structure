#include "linked_list.h"
#include <iostream>

// ������: �ʱ�ȭ
LinkedList::LinkedList() : head_(nullptr), size_(0) {}

// �Ҹ���: �޸� ����
LinkedList::~LinkedList() {
    Node* current = head_;
    while (current != nullptr) {
        Node* next = current->next_;
        delete current;
        current = next;
    }
}

// Ư�� ��ġ�� �� ����
void LinkedList::insert(int index, int value) {
    if (index < 0 || index > size_) {
        std::cerr << "Index out of bounds" << std::endl;
        return;
    }

    Node* newNode = new Node(value);
    if (index == 0) {
        newNode->next_ = head_;
        head_ = newNode;
    } else {
        Node* current = head_;
        for (int i = 0; i < index - 1; ++i) {
            current = current->next_;
        }
        newNode->next_ = current->next_;
        current->next_ = newNode;
    }
    ++size_;
}

// Ư�� ��ġ�� �� ��ȯ
int LinkedList::get(int index) {
    if (index < 0 || index >= size_) {
        std::cerr << "Index out of bounds" << std::endl;
        return -1;
    }

    Node* current = head_;
    for (int i = 0; i < index; ++i) {
        current = current->next_;
    }
    return current->value_;
}

// Ư�� ��ġ�� �� ����
void LinkedList::remove(int index) {
    if (index < 0 || index >= size_) {
        std::cerr << "Index out of bounds" << std::endl;
        return;
    }

    Node* toDelete = nullptr;
    if (index == 0) {
        toDelete = head_;
        head_ = head_->next_;
    } else {
        Node* current = head_;
        for (int i = 0; i < index - 1; ++i) {
            current = current->next_;
        }
        toDelete = current->next_;
        current->next_ = toDelete->next_;
    }
    delete toDelete;
    --size_;
}

// ����Ʈ ���
void LinkedList::print() {
    Node* current = head_;
    while (current != nullptr) {
        std::cout << current->value_ << " ";
        current = current->next_;
    }
    std::cout << std::endl;
}