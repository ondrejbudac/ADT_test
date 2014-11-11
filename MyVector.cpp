#include "MyVector.h"

template<class T>
MyVector<T>::MyVector() : numItems(0)
{  
} 

template<class T>
bool MyVector<T>::contains(T anItem) const 
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
void MyVector<T>::add(T newItem) 
{
  if (numItems < CAPACITY)
  {
    items[numItems] = newItem;
    numItems++;
  }
  else
  {
    throw "MyVector capacity reached";
  }
}

template<class T>
void MyVector<T>::remove(T anItem) 
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



