#include <stack>	// std::stack

class MinStack {
public:
    MinStack() {
        
    }
    
    void push(long val) {
        if (s.empty())
        {
            s.push(val);
            minValue = val;
        }
        else if (val >= minValue)
        {
            s.push(val);
        }
        else
        {
            s.push(2 * val - minValue);
            minValue = val;
        }
    }
    
    void pop() {
        if (s.top() < minValue)
        {
            minValue = 2 * minValue - s.top();
        }
        s.pop();
    }
    
    int top() {
        if (s.top() < minValue)
        {
            return minValue;
        }
        else
        {
            return s.top();
        }
    }
    
    int getMin() {
        return minValue;
    }

private:
    std::stack<long> s;
    long minValue;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */