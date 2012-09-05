#ifndef __BLISTITEM__H__
#define __BLISTITEM__H__

template<typename T>
class BListItem
{
 public:
  BListItem();
  BListItem(const BListItem & from);

  ~BListItem();

 private:

  T data;
 
  BListItem * p_next;
  BListItem * p_prev;

};



#endif
