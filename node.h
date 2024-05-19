#ifndef NODE_H
#define NODE_H

class Node {
  // Node Ŭ���� ���� ������ ��. �Լ�, ���� �߰� �Ұ���

public:
  Node(int value) {
    value_ = value;
    next_ = nullptr;
  }

private:
  int value_;
  Node *next_;

  // LinkedList�� Node�� private ����� ������ �� �ֵ��� ��
  friend class LinkedList;
};

#endif