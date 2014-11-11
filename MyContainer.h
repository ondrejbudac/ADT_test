#ifndef _MY_CONTAINER
#define _MY_CONTAINER

template<class T>
class MyContainer
{
protected:
  int numItems;
public:
  MyContainer();
  bool empty() const;
  int size() const;
  virtual bool contains(T anItem) const = 0;
  virtual void add(T newItem) = 0;
  virtual void remove(T newItem) = 0; 
  virtual void print() const = 0;
};

#include "MyContainer.cpp"

#endif
