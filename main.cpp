#include "list.h"
#include "queue.h"
#include "stack.h"
#include <iostream>

// 템플릿 함수 선언
template<typename T>
void print(T &list) { 
    list.print(); 
}

void testQueue() {
  Queue queue;

  for (int i = 0; i < 10; i++)
    queue.push(i);

  for (int i = 100; i > 90; i--)
    queue += i;

  std::cout << queue.peek() << std::endl;
  print(queue);

  for (int i = 0; i < 5; i++) {
    std::cout << queue.pop() << std::endl;
  }
  print(queue);
}

void testStack() {
  Stack stack;

  for (int i = 0; i < 10; i++)
    stack.push(i);

  for (int i = 100; i > 90; i--)
    stack += i;

  std::cout << stack.peek() << std::endl;
  print(stack);

  for (int i = 0; i < 5; i++) {
    std::cout << stack.pop() << std::endl;
  }
  print(stack);
}

void testList() {
  List list;

  for (int i = 0; i < 10; i++)
    list.insert(i, i);

  print(list);
}

int main() {
  testQueue();
  testStack();
  testList();
}