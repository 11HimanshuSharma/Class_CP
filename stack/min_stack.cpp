
#include<iostream>
#include<stack>
class MinStack {
private:
    stack<int> main_temp, st;

public:
    MinStack() {}

    void push(int val) {
        main_temp.push(val);

        if (st.empty() || val <= st.top()) {
            st.push(val);
        }
    }

    void pop() {
        if (!main_temp.empty()) {

            if (main_temp.top() == st.top()) {
                st.pop();
            }
            main_temp.pop();
        }
    }

    int top() { return main_temp.top(); }

    int getMin() { return st.top(); }
};

using namespace std;
class MinStack {
private:
    stack<int> main_temp, st;

public:
    MinStack() {}

    void push(int val) {
        main_temp.push(val);

        if (st.empty() || val <= st.top()) {
            st.push(val);
        }
    }

    void pop() {
        if (!main_temp.empty()) {

            if (main_temp.top() == st.top()) {
                st.pop();
            }
            main_temp.pop();
        }
    }

    int top() { return main_temp.top(); }

    int getMin() { return st.top(); }
};
int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << minStack.getMin() << endl; // Returns -3
    minStack.pop();
    cout << minStack.top() << endl;    // Returns 0
    cout << minStack.getMin() << endl; // Returns -2
    return 0;
}
