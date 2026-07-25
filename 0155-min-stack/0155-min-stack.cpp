class MinStack {
public:
    vector <int> s,s2;
    MinStack() {
    }

    void push(int val) {
    s.push_back(val);
   val = std::min(val, s2.empty() ? val : s2.back());
        s2.push_back(val);
    }

    void pop() {
       s2.pop_back();
        s.pop_back();
    }

    int top() {
        return s[s.size()-1];
    }

    int getMin() {
        return s2[s2.size()-1];
    }
};