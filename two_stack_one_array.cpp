#include<iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top1, top2;
    int n;

public:
    Stack(int n) {
        this->n = n;
        arr = new int[n];
        this->top1 = 0;          
        this->top2 = n/2;            
    }

    void push_stack1(int key) {
        if (top1 < n / 2 ) {
            arr[top1++] = key;
        } else {
            cout << "Stack 1 Overflow" << endl;
        }
    }

    void push_stack2(int key) {
        if (top2 < n - 1) {
            arr[top2++] = key;
        } else {
            cout << "Stack 2 Overflow" << endl;
        }
    }

    void pop_stack1() {
        if (top1 < 0) {
            cout << "Stack 1 is empty" << endl;
        } else {
            cout << "Popped from stack 1: " << arr[top1--] << endl;
        }
    }

    void pop_stack2() {
        if (top2 < n/2) {
            cout << "Stack 2 is empty" << endl;
        } else {
            cout << "Popped from stack 2: " << arr[top2--] << endl;
        }
    }

    void display_stack1() {
        cout << "Stack 1: ";
        for (int i = top1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void display_stack2() {
        cout << "Stack 2: ";
        for (int i = top2; i >= n/2; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Stack() {
        delete[] arr;
    }
};

int main() {
    Stack s(8);

    s.push_stack1(10);
    s.push_stack2(10);
    s.push_stack1(20);
    s.push_stack2(20);
    s.push_stack1(30);
    s.push_stack2(30);

    s.display_stack1();
    s.display_stack2();

    s.pop_stack1();
    s.pop_stack2();

    s.display_stack1();
    s.display_stack2();

    return 0;
}
