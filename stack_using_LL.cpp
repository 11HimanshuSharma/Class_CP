#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

};
class stack{
  private:
  Node* head;
  public:
  stack(){
    head = NULL;
    
  }
  void push(int val){
    if (head == NULL){
      head = new Node();
      head->data = val;
      head->next = NULL;
      
    }
    else{
      Node* new_node = new Node();
      new_node->data = val;
      new_node->next = head;
      head = new_node;

    }
  }
  int pop(){
    int temp = -1;
    if (head == NULL){
      return -1;
    }
    else{
      temp = head->data;
      delete head;
      head = NULL;
      
    }
    return temp;
  }
  void display(){
    cout << "Stack elements: " ;
    Node *temp = head;
    while (temp){
      cout << temp->data << " ";
      temp = temp->next;
    }
  }

  
};


int main(){
  stack s;
  s.push(1);kkkkkkkkkkkk
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);   

  s.display();

  cout << endl;
  cout << s.pop();
  

}