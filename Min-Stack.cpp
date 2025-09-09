class MinStack {
private:
    stack<int>main;
    stack<int>min_Stack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        val=min(val,min_Stack.empty()?val:min_Stack.top());
        min_Stack.push(val);
    }
    
    void pop() {
        if(!main.empty()){
            main.pop();
            min_Stack.pop();
        }
    }
    
    int top() {
        return main.top();
        
    }
    
    int getMin() {
        return min_Stack.top();
        
    }
};

