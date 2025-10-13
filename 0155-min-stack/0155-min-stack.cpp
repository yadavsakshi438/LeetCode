class MinStack {
public:stack<pair<int,int>>st;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty())
        {
            st.push({val,val});
        }
        
        else
        {auto it=st.top();
       int mini=min(val,it.second);
        st.push({val,mini});}
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        auto it=st.top();
        return it.second;
    }
};
