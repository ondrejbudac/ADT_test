#ifndef _MY_UNSORTED_VECTOR
#define _MY_UNSORTED_VECTOR

#include "MyVector.h"

template<class T>
class MyUnsortedVector : public MyVector<T> 
{
protected:
  int numItems;
  static const int CAPACITY = 100;
  T items[CAPACITY];
public:
  MyUnsortedVector();
  bool contains(T anItem) const;
  void add(T newItem);
  void remove(T newItem); 
};

#include "MyUnsortedVector.cpp"

#endif

