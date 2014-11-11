#ifndef _MY_VECTOR
#define _MY_VECTOR

#include "MyContainer.h"

template<class T>
class MyVector : public MyContainer<T> 
{
protected:
  int numItems;
  static const int CAPACITY = 100;
  T items[CAPACITY];
public:
  bool isFull() const;
  virtual bool contains(T anItem) const = 0;
  virtual void add(T newItem) = 0;
  virtual void remove(T newItem) = 0; 
  void print() const;
};

#include "MyVector.cpp"

#endif
