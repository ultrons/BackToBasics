#include "listNode.h"

listNode::listNode (int _key_) {
   key=_key_;
   nextlistNode= NULL;
}


listNode::~listNode(void) {
}

void listNode::setNextlistNode (listNode * _nextlistNode_) {
  nextlistNode = _nextlistNode_;
}

listNode * listNode::getNextlistNode (void) {
    return nextlistNode;
}


int listNode::getKey(void) {
  return key;
}
