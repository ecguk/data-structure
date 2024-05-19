#ifndef NODE_H
#define NODE_H

class Node {
  // Node 클래스 정의 수정할 것. 함수, 변수 추가 불가능

public:
  Node(int value) {
    value_ = value;
    next_ = nullptr;
  }

private:
  int value_;
  Node *next_;

  // LinkedList가 Node의 private 멤버에 접근할 수 있도록 함
  friend class LinkedList;
};

#endif