#include "MyUnsortedVector.h"


template<class T>
bool MyUnsortedVector<T>::contains(T anItem) const 
{
  for (int i=0; i < MyContainer<T>::numItems; ++i)
  {
    if (MyVector<T>::items[i] == anItem) 
    {
      return true;
    }
  }
  return false;
}

template<class T>
void MyUnsortedVector<T>::add(T newItem) 
{
  if (!this->isFull())
  {
    MyVector<T>::items[MyContainer<T>::numItems] = newItem;
    MyContainer<T>::numItems++;
  }
}

template<class T>
void MyUnsortedVector<T>::remove(T anItem) 
{
  bool found {false};
  for (int i=0; i < MyContainer<T>::numItems; ++i)
  {
    if (found) 
    {
      MyVector<T>::items[i-1] = MyVector<T>::items[i];
    }
    else if (MyVector<T>::items[i] == anItem)
    {
      found = true;
    }
  }
  if (found)
  {
    MyContainer<T>::numItems--;
  }
}



