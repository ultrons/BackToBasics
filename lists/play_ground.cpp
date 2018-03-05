#include <iostream>
#include "listNode.h"
#include "list_func.h"

int main (void) {

   listNode n1(1);
   listNode n2(2);
   listNode n3(3);
   listNode n4(4);
   listNode n5(5);
   listNode n6(6);
   listNode n7(7);

  n1.setNextlistNode(&n2);
  n2.setNextlistNode(&n3);
  n3.setNextlistNode(&n4);
  n4.setNextlistNode(&n5);
  n5.setNextlistNode(&n6);
  n6.setNextlistNode(&n7);


  print(&n1);
  print(reverse(&n1));

return 0;

}
