#include "MySortedVector.h"

template<class T>
int MySortedVector<T>::find(T anItem) const 
{
  int low = 0;
  int high = this->numItems;
  while (low < high) {
    int mid = (low + high) / 2;
    if (this->items[mid] < anItem) {
      low = mid+1;
    } else if (this->items[mid] > anItem) {
      high = mid;
    } else {
      return mid;
    }
  }
  return -1;
}


template<class T>
bool MySortedVector<T>::contains(T anItem) const 
{
  return find(anItem) != -1;
}

template<class T>
void MySortedVector<T>::add(T newItem) 
{
  // insert - could be optimized with binary search
  if (!this->isFull()) {
    int i = this->numItems-1;
    for (; i>=0; --i) {
      if (this->items[i] > newItem) {
        this->items[i+1] = this->items[i];
      } else {
        break;
      }
    }
    this->items[i+1] = newItem;
    this->numItems++;
  }
}

template<class T>
void MySortedVector<T>::remove(T anItem) 
{
  int pos = find(anItem);
  if (pos >= 0) {
    for (int i=pos+1; i < this->numItems; ++i) {
      this->items[i-1] = this->items[i];
    }
  }
  this->numItems--;
}



