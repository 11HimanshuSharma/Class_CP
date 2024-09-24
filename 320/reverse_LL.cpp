#include<iostream>
using namespace std;


class Node{
  public:
  int data;
  Node *next;
  Node(int value){
    data = value;
    next = NULL;
  }
};

class LL{
  private: 
  Node *head,*last;
  public:
  LL(){
    head = NULL;
    last = NULL;
  }
  void insert(int key){
    if (head == NULL){
      head = new Node(key);
      last = head;
    }
    else{
      last->next = new Node(key);
      last = last->next;
    }
  }
  void display(){
    Node *temp = head;
    while (temp){
      cout << temp->data << " ";
      temp = temp->next;
    }
  
  }
  Node * reverse(Node *node){
   if (node == NULL && node->next == NULL){
    return node;
   }
   node->next->next = reverse(node->next);
   node->next = NULL;
   return node;
  }

};

int main(){
  LL l;
  l.insert(1);
  l.insert(2);
  l.insert(3);
  l.insert(5);
  l.display();
}