class MinStack {
public:
    stack<int> main;

    MinStack() {
    }

    void push(int val) {
        main.push(val);
    }

    void pop() {
        // ✅ stack::pop() takes no arguments
        if (!main.empty()) {
            main.pop();
        }
    }

    int top() {
        if (!main.empty()) {
            return main.top();
        }
        return -1; // or throw an exception
    }

    int getMin() {
        // ✅ Declare min_val and initialize safely
        stack<int> minmain;
        int min_val = main.top();

        // ✅ Traverse and find minimum
        while (!main.empty()) {
            min_val = min(min_val, main.top());
            minmain.push(main.top());
            main.pop();
        }

        // ✅ Restore original stack
        while (!minmain.empty()) {
            main.push(minmain.top());
            minmain.pop();
        }

        return min_val;
    }
};