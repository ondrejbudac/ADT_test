#include "MyContainer.h"

template<class T>
bool MyContainer<T>::empty() const
{
  return numItems == 0;
}

template<class T>
int MyContainer<T>::size() const
{
  return numItems;
}
