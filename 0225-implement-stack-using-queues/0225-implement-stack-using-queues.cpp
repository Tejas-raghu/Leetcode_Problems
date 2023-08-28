class MyStack {
public:
    queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
//         int n = q1.size();

//         for(int i=0 ; i<n-1 ; i++){
//             q2.push(q1.front());
//             q1.pop();
//         }

//         int x = q1.front();
//         q1.pop();
//         swap(q1,q2);
//         return x;
        if(!q1.empty()){
         int x = q1.front();
         q1.pop();
         return x;}
        else{
            return -1;
        }
    }
    
    int top() {

        if(!q1.empty())
            return q1.front();
        else
            return -1;
        
    }
    
    bool empty() {
        return q1.empty();
    }
};
