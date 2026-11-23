class CustomStack {
public:
    vector<int> stack;
    vector<int> inc;
    int top;

    CustomStack(int maxSize) {
        if (maxSize > 0) {
            stack.resize(maxSize);
            inc.resize(maxSize, 0);
        }
        top = -1;
    }

    void push(int x) {
        if (!stack.empty() && top < static_cast<int>(stack.size()) - 1) {
            top++;
            stack[top] = x;
        }
    }

    int pop() {
        if (top == -1) {
            return -1;
        }
        int res = stack[top] + inc[top];
        if (top > 0) {
            inc[top - 1] += inc[top]; 
        }
        inc[top] = 0; 
        top--;
        return res;
    }

    void increment(int k, int val) {
        if (top == -1 || k <= 0) {
            return;
        }
        int idx = min(k, top + 1) - 1;
        inc[idx] += val;
    }
};
/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */