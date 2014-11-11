#include "MyContainer.h"
#include "MyUnsortedVector.h"
#include "MySortedVector.h"

#include <iostream>

template<class T>
void testContainer(MyContainer<T> &con) {
  con.print();
  
  std::cout << "Adding 7\n";
  con.add(7);
  con.print();

  std::cout << "Adding 2\n";
  con.add(2);
  con.print();

  std::cout << "Adding 2\n";
  con.add(2);
  con.print();

  std::cout << "Adding 3\n";
  con.add(3);
  con.print();
  
  std::cout << "Removing 2\n";
  con.remove(2);
  con.print();

  std::cout << "Adding 7\n";
  con.add(7);
  con.print();

  std::cout << "Removing 7\n";
  con.remove(7);
  con.print();
}

int main() {
  MySortedVector<int> sv;
  testContainer(sv);

  MySortedVector<int> uv;
  testContainer(uv);
}
