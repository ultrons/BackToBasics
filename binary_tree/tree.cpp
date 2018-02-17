#include "tree.h"

#include <queue>
#include <stack>
#include <iostream>


void preOrderTraversal(Node * N) {


}

void postOrderTraversal(Node * N) {

}

// Plan of attack:
// 1. Create a stack
// 2. Push the given Node to the stack
// 3. Go to left leaf in the sub tree of this node
// 4. Keep on adding the Nodes along the way to the stack
// 5. Once the left most leaf is reached print the key value
// 6. pop the leaf
// 7.

void inOrderTraversal(Node * N) {
  std::stack<Node *> NodeStack;
  Node * top;
  Node * p;
  NodeStack.push(N);
  while (!NodeStack.empty()) {
    while (NodeStack.top()->getLeftChild() != NULL) {
      NodeStack.push(NodeStack.top()->getLeftChild());
    }
    // At this point top is the pointer to the left most leaf
    // In the sub tree
    // print this and pop this Node from the Stack
    std::cout << NodeStack.top()->getKey() <<   std::endl;
    top=NodeStack.top();
    NodeStack.pop();
    if (top->getRightChild() != NULL) {
      NodeStack.push(top->getRightChild());
    } else  if (!NodeStack.empty()) {
      p=NodeStack.top();
      std::cout << p->getKey() <<   std::endl;
      NodeStack.pop();
      if (p->getRightChild() != NULL) {
        NodeStack.push(p->getRightChild());
      }
    }
  }
}

void printByLevel (Node * N) {
  std::queue<Node *> NodeQ;

  // Push the input node to the queue

  NodeQ.push(N);
  int count = 1; //count indicates number of nodes in the current level

  while (!NodeQ.empty()) {
    int sum = 0;
    int tempCount = 0; //Keeps track of count of next level nodes
    while (count !=0 ) {
      Node * temp = NodeQ.front();
      Node * l = temp->getLeftChild();
      Node * r = temp->getRightChild();
      NodeQ.pop();
      sum+=temp->getKey();
      count--;
      if (r != NULL) {
        NodeQ.push(r) ;
        tempCount++;
      }
      if (l != NULL)  {
        NodeQ.push(l);
        tempCount++;
      }
    }
    count=tempCount;
    std::cout << sum << std::endl;
    }
  }
