class MinStack {
    Stack<Integer> stack ;
    Stack<Integer> minstack = new Stack<>();
    int top;
    public MinStack() {
        stack =new Stack<>();
    }
    
    public void push(int value) {
         stack.push(value);

         if(minstack.empty()) 
            minstack.push(value);
        else if(value<= minstack.peek())
            minstack.push(value);
    }
    
    public void pop() {
        int x=stack.pop();
        if(x==minstack.peek())
             minstack.pop();
    }
    
    public int top() {
        top=stack.pop();
        stack.push(top);
        return top;
    }
    
    public int getMin() {
        return minstack.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(value);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
