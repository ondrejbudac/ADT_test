#include "MyVector.h"

#include <iostream>

template<class T>
bool MyVector<T>::isFull() const
{
  return MyContainer<T>::numItems == CAPACITY;
}

template<class T>
void MyVector<T>::print() const
{
  std::cout << "Vector (" << MyContainer<T>::numItems << "):";
  for (int i=0; i < MyContainer<T>::numItems; ++i)
  {
    std::cout << " " << items[i];
  }
  std::cout << "\n";
}
