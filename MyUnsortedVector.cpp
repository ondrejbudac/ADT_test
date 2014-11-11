#include "MyUnsortedVector.h"


template<class T>
bool MyUnsortedVector<T>::contains(T anItem) const 
{
  for (int i=0; i < this->numItems; ++i)
  {
    if (this->items[i] == anItem) 
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
    this->items[this->numItems] = newItem;
    this->numItems++;
  }
}

template<class T>
void MyUnsortedVector<T>::remove(T anItem) 
{
  bool found {false};
  for (int i=0; i < this->numItems; ++i)
  {
    if (found) 
    {
      this->items[i-1] = this->items[i];
    }
    else if (this->items[i] == anItem)
    {
      found = true;
    }
  }
  if (found)
  {
    this->numItems--;
  }
}



