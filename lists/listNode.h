#ifndef _NODE_H_
#define _NODE_H_
#include <stddef.h>
/**
Class listNode holds a key and the link to the next listNode
It also has basic methods to get those members.
Set method has only been provided for the pointer to the next node.
*/
class listNode {

  private:
  /// Container to hold the key (value)
  int key;
  /// Pointer to the next node
  listNode * nextlistNode;

  public:
  listNode   (int);
  ~listNode  (void);

  void  setNextlistNode (listNode *);
  listNode * getNextlistNode (void);
  int    getKey      (void);
};
#endif
