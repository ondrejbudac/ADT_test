#ifndef _MY_UNSORTED_VECTOR
#define _MY_UNSORTED_VECTOR

#include "MyVector.h"

template<class T>
class MyUnsortedVector : public MyVector<T> 
{
public:
  bool contains(T anItem) const;
  void add(T newItem);
  void remove(T newItem); 
};

#include "MyUnsortedVector.cpp"

#endif

