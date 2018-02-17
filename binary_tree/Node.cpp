#include "Node.h"
#include <stddef.h>

Node::Node()
  :key(0), leftChild(NULL), rightChild(NULL)
{ }

Node::Node(int _key_)
  :key(_key_), leftChild(NULL), rightChild(NULL)
{ }

Node::Node(int _key_, Node * left, Node * right)
  :key(_key_), leftChild(left), rightChild(right)
{ }

Node::~Node(void) { }

int Node::getKey(void) { return key; }
Node * Node::getLeftChild(void) { return leftChild; }
Node * Node::getRightChild(void) { return rightChild;}

void Node::setKey(int _key_) { key = _key_; }
void Node::setLeftChild(Node * _node_) { leftChild = _node_; }
void Node::setRightChild(Node * _node_) { rightChild = _node_;}
