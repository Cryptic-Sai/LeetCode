// class MyStack {
// public:
//      queue<int> que;
//     MyStack() {
       
//     }
   
//     void push(int x) {
//         que.push(x);
//         for(int i=0; i<que.size() -1; ++i){
//             que.push(que.front());
//             que.pop();
//       }
//     }
    
//     void pop() {
//         que.pop();
//     }
    
//     int top() {
//         return que.front();
//     }
    
//     bool empty() {
//         return que.empty();
// }
// };
// /**
//  * Your MyStack object will be instantiated and called as such:
//  * MyStack* obj = new MyStack();
//  * obj->push(x);
//  * int param_2 = obj->pop();
//  * int param_3 = obj->top();
//  * bool param_4 = obj->empty();
//  */
class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int> q1;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        int sz = q1.size();
        q1.push(x);
        while(sz--){
            q1.push(q1.front());
            q1.pop();
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int result = top();
        q1.pop();
        return result;
    }
    
    /** Get the top element. */
    int top() {
        return q1.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
};