#include "tree.h"

#include <queue>
#include <stack>
#include <iostream>


void preOrderTraversal(Node * N) {
  std::stack<Node *> NodeStack;
  Node * top;
  Node * p;

  NodeStack.push(N);
  std::cout << NodeStack.top()->getKey() << std::endl;
  while(!NodeStack.empty()) {
    while (NodeStack.top()->getLeftChild() != NULL) {
      NodeStack.push(NodeStack.top()->getLeftChild());
      std::cout << NodeStack.top()->getKey() << std::endl;
    }
    if (NodeStack.empty()) break;
    top = NodeStack.top();
    NodeStack.pop();
    while (top->getRightChild() == NULL) {
      if (NodeStack.empty()) break;
      top = NodeStack.top();
      NodeStack.pop();
    }
    if (top->getRightChild() != NULL) {
      NodeStack.push(top->getRightChild());
      std::cout << NodeStack.top()->getKey() << std::endl;
    }
  }

}


// Plan of attack:
// Start from the root
// Follow the left child along until none left (add them to a stack along the way)
// look at the right child of this node
// If there is a right child add to the stack and start over
// If there is no right child it's a leaf
// print the leaf, pop the leaf
// while true
// Check if there was right child of the parent
// If there were no right child then print the parent and pop the parent
// If there was a right child add the right child to the stack and break
// If the stack get's empty (break anyway
void postOrderTraversal(Node * N) {
  std::stack<Node *> NodeStack;
  //stack top
  Node * top;

  NodeStack.push(N);
  top=NodeStack.top();

  while (!NodeStack.empty()) {
    while(top->getLeftChild() != NULL) {
      NodeStack.push(top->getLeftChild());
      top = NodeStack.top();
    }
    if (top->getRightChild() != NULL) {
      NodeStack.push(top->getRightChild());
      top = NodeStack.top();
      continue;
    }
    while (true) {
      std::cout << top->getKey() << std::endl;
      NodeStack.pop();

      if (NodeStack.empty()) break;

      if (NodeStack.top()->getRightChild() != NULL && NodeStack.top()->getRightChild() != top ) {
        NodeStack.push(NodeStack.top()->getRightChild());
        top=NodeStack.top();
        break;
      } else {
        top=NodeStack.top();
      }
    }
  }
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
