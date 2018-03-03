#ifndef __NODE_H__
#define __NODE_H__


class Node {
  private:
    int key;
    Node * leftChild;
    Node * rightChild;

  public:
    Node(void);
    Node(int);
    Node(int, Node *, Node *);
    ~Node(void);

    int getKey(void);
    void setKey(int);
    Node * getLeftChild(void);
    void setLeftChild(Node *);
    Node * getRightChild(void);
    void setRightChild(Node *);
};
#endif
