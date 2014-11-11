#include "MyUnsortedVector.h"

#include <iostream>

//template<class T>
//MyUnsortedVector<T>::MyUnsortedVector() : numItems(0)
//{  
//} 

template<class T>
bool MyUnsortedVector<T>::contains(T anItem) const 
{
  for (int i=0; i<numItems; ++i)
  {
    if (items[i] == anItem) 
    {
      return true;
    }
  }
  return false;
}

template<class T>
void MyUnsortedVector<T>::add(T newItem) 
{
  std::cout << "here";
  if (!this->isFull())
  {
    items[numItems] = newItem;
    numItems++;
    std::cout << "there" << numItems << "\n";
  }
}

template<class T>
void MyUnsortedVector<T>::remove(T anItem) 
{
  bool found {false};
  for (int i=0; i<numItems; ++i)
  {
    if (found) 
    {
      items[i-1] = items[i];
    }
    else if (items[i] == anItem)
    {
      found = true;
    }
  }
  if (found)
  {
    numItems--;
  }
}



