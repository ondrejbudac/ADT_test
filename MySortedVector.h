#ifndef _MY_SORTED_VECTOR
#define _MY_SORTED_VECTOR

#include "MyVector.h"

template<class T>
class MySortedVector : public MyVector<T> 
{
public:
  int find(T anItem) const;
  bool contains(T anItem) const;
  void add(T newItem);
  void remove(T newItem); 
};

#include "MySortedVector.cpp"

#endif

