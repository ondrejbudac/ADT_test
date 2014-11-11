#include "MyVector.h"

#include <iostream>

template<class T>
bool MyVector<T>::isFull() const
{
  return numItems == CAPACITY;
}

template<class T>
void MyVector<T>::print() const
{
  std::cout << "Vector (" << numItems << "):";
  for (int i=0; i<numItems; ++i)
  {
    std::cout << " " << items[i];
  }
  std::cout << "\n";
}
