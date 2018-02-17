#include<iostream>
#include "Node.h"
#include<queue>

void sumByLevel(Node * N) {
  std::vector<int> sum;
  std::queue<Node*> temp_q;
  temp_q.push(N);

  while( !temp_q.empty()) {
    int current_size=temp_q.size();
    int s=0;
    while(current_size!=0) {
      Node * t = temp_q.front();
      s+=t->getKey();
      temp_q.pop();

      for (int i=0; i< t->getChildren()->size() ; i++) {
        temp_q.push(t->getChild(i));
      }
      current_size--;
    }
    sum.push_back(s);
    std::cout << "Sum :" << s << std::endl;
  }

}

int main () {

 //std::vector<int> * s  = new std::vector<int>;

  //s->push_back(5);
  //s->push_back(5);
  //s->push_back(5);
  //s->push_back(5);


  Node R(7);
  Node L1(5);
  Node N5(5);
  Node N6(6);
  N5.addChild(N6);

  L1.addChild(N5);
  L1.addChild(N5);
  L1.addChild(N5);
  L1.addChild(N5);
  R.addChild(L1);
  R.addChild(N5);


  sumByLevel (&R);





  //delete s;
  return 0;

}
