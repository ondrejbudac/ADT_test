#ifndef _MY_VECTOR
#define _MY_VECTOR

#include "MyContainer.h"

template<class T>
class MyVector : public MyContainer<T> 
{
private:
  static const int CAPACITY = 100;
  T items[CAPACITY];
protected:
  int numItems;
public:
  MyVector();
  bool contains(T anItem) const;
  void add(T newItem);
  void remove(T newItem);
};

#include "MyVector.cpp"

#endif
