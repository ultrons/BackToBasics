#ifndef __NODE__
#define __NODE__
#include <iostream>
#include <vector>

class Node {
  private:
    int key;
    std::vector<Node> * children;

  public:
    int getKey (void);
    Node (int key ) {
       this->key = key;
       this->children = new std::vector <Node>;
    }
    ~Node(void) {
      //delete children;
      //std::cout << this->getKey() << std::endl;
//delete this->children;
    }

    void addChild(Node n);
    std::vector<Node> * getChildren (void);
    bool isLeafNode();
    Node * getChild(int i);
};

#endif
