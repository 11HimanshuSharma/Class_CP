#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    Node(int key) {
        data = key;
        prev = NULL;
        next = NULL;
    }
};

class Stack {
private:
    Node *head, *mid;
    int count; 

public:
    Stack() {
        head = NULL;
        mid = NULL;
        count = 0;
    }

    void push(int key) {
        Node *new_node = new Node(key);
        if (head == NULL) {
            head = new_node;
            mid = new_node;
        } else {
            new_node->prev = head;
            head->next = new_node;
            head = new_node;

            if (count % 2 != 0) { 
                mid = mid->next;
            }
        }
        count++;
    }

    void pop() {
        if (head == NULL) return; 

        Node *temp = head;
        head = head->prev;
        if (head != NULL)
            head->next = NULL;

\
        if (count % 2 == 0) { 
            mid = mid->prev;
        }

        delete temp;
        count--;
    }

    int findMiddle() {
        if (mid != NULL)
            return mid->data;
        return -1; 
    }

    void display() {
        Node *temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->prev; 
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();

    s.pop();
    s.display();

    cout << "Middle element is: " << s.findMiddle() << endl;

    return 0;
}
