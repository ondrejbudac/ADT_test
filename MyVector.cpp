#include "MyVector.h"

#include <iostream>

template<class T>
bool MyVector<T>::isFull() const
{
  return this->numItems == CAPACITY;
}

template<class T>
void MyVector<T>::print() const
{
  std::cout << "Vector (" << this->numItems << "):";
  for (int i=0; i < this->numItems; ++i)
  {
    std::cout << " " << items[i];
  }
  std::cout << "\n";
}
