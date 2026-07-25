class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    stack <string> s;
    for(string x : tokens){
        if(x!="+" && x!="-" && x!="*" && x!="/")s.push(x);
        else {
            if(x=="+"){
                int x,y;
                x=stoi(s.top());s.pop();
                y= stoi(s.top())+x;s.pop();
                s.push(to_string(y));
            }
            else if(x=="-"){
                int x,y;
                x=stoi(s.top());s.pop();
                y= stoi(s.top()) -x;s.pop();
                s.push(to_string(y));
            }
            else if(x=="*"){
                int x,y;
                x=stoi(s.top());s.pop();
                y= stoi(s.top())*x;s.pop();
                s.push(to_string(y));
            }
            else {
                int x,y;
                x=stoi(s.top());s.pop();
                y= stoi(s.top())/x;s.pop();
                s.push(to_string(y));
            }

        }
    }
        return stoi(s.top());
    }
};