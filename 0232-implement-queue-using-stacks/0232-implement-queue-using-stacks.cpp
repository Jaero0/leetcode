class MyQueue {
public:
    int front = 0;
    vector<int> v;

    MyQueue() {
    }
    
    // 1 pop empty
    // 01 11
    void push(int x) {
        
        v.push_back(x);
    }
    
    int pop() {
        int t = v[front];
        front++;
        return t;
    }
    
    int peek() {
        return v[front];
    }
    
    bool empty() {

        int s = v.size();

        if(s == 0) return true;

        return front >= s ? true : false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */