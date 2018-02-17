#include "Node.h"
#include "tree.h"
#include <iostream>
int main() {

  Node N1(4);
  Node N2(2);
  Node N3(6);
  Node N4(1);
  Node N5(3);
  Node N6(5);
  Node N7(7);

  N1.setLeftChild(&N2);
  N1.setRightChild(&N3);
  N2.setLeftChild(&N4);
  N2.setRightChild(&N5);
  N3.setLeftChild(&N6);
  N3.setRightChild(&N7);




  printByLevel(&N1);
  std::cout << "######################" << std::endl;
  inOrderTraversal(&N1);
  std::cout << "######################" << std::endl;

  Node R(4);
  Node R1(9);
  Node R2(5);
  Node R3(10);
  Node R4(7);

  R.setRightChild(&R1);
  R1.setRightChild(&R3);
  R1.setLeftChild(&R2);
  R2.setRightChild(&R4);
  inOrderTraversal(&R);




return 0;


}
