#include "MyUnsortedVector.h"

#include <iostream>

void testMyUnsortedVector() {
  MyUnsortedVector<int> vec;
  vec.print();
  
  std::cout << "Adding 7\n";
  vec.add(7);
  vec.print();

  std::cout << "Adding 2\n";
  vec.add(2);
  vec.print();

  std::cout << "Adding 2\n";
  vec.add(2);
  vec.print();

  std::cout << "Adding 3\n";
  vec.add(3);
  vec.print();
  
  std::cout << "Removing 2\n";
  vec.remove(2);
  vec.print();

  std::cout << "Adding 7\n";
  vec.add(7);
  vec.print();

  std::cout << "Removing 7\n";
  vec.remove(7);
  vec.print();
}

int main() {
  testMyUnsortedVector();
}
