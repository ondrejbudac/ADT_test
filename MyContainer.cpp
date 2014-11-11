#include "MyContainer.h"

template<class T>
int MyContainer<T>::MyContainer() : numItems(0)
{
}

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
