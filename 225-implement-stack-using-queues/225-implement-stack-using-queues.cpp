class MyStack {
public:
    queue<int> que;
    MyStack() {
    }
    
    void push(int x) {
        if(que.empty()) que.push(x);
        else{
            int size = que.size();
            que.push(x); //now we have size+1 elements in queue
            while(size>0)
            {
                int top = que.front(); //for roatation the element one place
                que.pop();
                que.push(top);
                size--;
            }
            
        }
    }
    
    int pop() {
        int top = que.front();
        que.pop();
        return top;
    }
    
    int top() {
        return que.front();
    }
    
    bool empty() {
        return que.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */