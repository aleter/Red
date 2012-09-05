#ifndef __BLIST__H__
#define __BLIST__H__

#include "BListItem.h"

enum ListType
  {
    int Sublist = 0,
    int Id      = 1
  };

template<ListType LT>
class BList
{
 public:
  BList();
  BList(const BList & from);
  ~BList();

 private:

  int p_count;
  int p_type;

  BListItem* p_first;

};



#endif
