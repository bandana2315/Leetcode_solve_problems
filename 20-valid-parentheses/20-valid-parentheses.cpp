class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
         stack<char>stk;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                stk.push(s[i]);
            }
            else if(s[i]==')'||s[i]==']'||s[i]=='}'){
                if(stk.empty())return false;
                if(s[i]==')'){
                    if(stk.top()!='(')return false;
                    else
                        stk.pop();
                }
                if(s[i]==']'){
                    if(stk.top()!='[')return false;
                    else
                        stk.pop();
                }
                if(s[i]=='}'){
                    if(stk.top()!='{')return false;
                    else
                        stk.pop();
                }
            }
        }
        return stk.empty();
    }
};