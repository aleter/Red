#include "BListItem.h"

template<typename T>
BListItem<T>::BListItem()
{
  data = T();
}

template<typename T>
BListItem<T>::BListItem(const BListItem & from)
{
  data = T();
  data = from.data;

}

template<typename T>
BListItem<T>::~BListItem()
{
  
}
