
#include "listNode.h"
#include <iostream>
void print (listNode * n) {
   std::cout << "\n##### content of the given list ####\n";
   listNode * nn = n->getNextlistNode() ; 
   while (true) {
     std::cout << n->getKey() << std::endl;
     n=n->getNextlistNode();
     if(n==NULL) break;
   }
} 

listNode * reverse (listNode * n) {
   listNode * prevlistNode = NULL;
   listNode * currentlistNode = n;
   listNode * n_int = currentlistNode->getNextlistNode();
   while ( n_int != NULL) {
     currentlistNode->setNextlistNode(prevlistNode);
     prevlistNode = currentlistNode;
     currentlistNode= n_int;
     n_int = currentlistNode->getNextlistNode();
   }
   
currentlistNode->setNextlistNode(prevlistNode);

return currentlistNode;
}


listNode * copy (listNode * n) {

return NULL;
}
