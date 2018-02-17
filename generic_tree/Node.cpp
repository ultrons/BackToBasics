#include "Node.h"

void Node::addChild(Node n) {
  children->push_back(n);
}

int Node::getKey() {
  return key;
}

std::vector<Node> *  Node::getChildren() {
  return children;
}

bool Node::isLeafNode() {
 return  (children->size() == 0);
}

Node * Node::getChild(int i) {
 return &(*children)[i];
}
