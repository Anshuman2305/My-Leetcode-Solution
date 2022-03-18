class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> stack;
        int res = 0;
        for(auto x : s)
        {
            if(x == '(')
            {
                stack.push(res);
                res=0;
            }
            else
            {
                res = stack.top() + max(2*res,1);
                stack.pop();
            }
        }
        return res;
    }
};