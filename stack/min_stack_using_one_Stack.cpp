class MinStack {
private:
    stack<int> st;
    int min;  // Store the current minimum value

public:
    MinStack() {
        min = INT_MAX;  // Initialize `min` to the maximum possible value
    }
    
    void push(int val) {
        // If the new value is smaller than or equal to the current minimum
        if (val <= min) {
            // First push the current minimum onto the stack
            st.push(min);
            // Update the current minimum to the new value
            min = val;
        }
        // Push the new value onto the stack
        st.push(val);
    }
    
    void pop() {
        // If the value being popped is the current minimum
        if (st.top() == min) {
            // Pop the top (current minimum)
            st.pop();
            // Restore the previous minimum value
            min = st.top();
        }
        // Pop the actual value
        st.pop();
    }
    
    int top() {
        return st.top();  // Return the top of the stack
    }
    
    int getMin() {
        return min;  // Return the current minimum
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
