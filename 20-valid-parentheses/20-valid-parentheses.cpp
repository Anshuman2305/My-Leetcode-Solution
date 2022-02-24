class Solution {
public:
    bool isValid(string s) {
        stack<char> dabba;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            char c=s[i];
            if(c=='('||c=='{'||c=='[') //if left symbol is encountered
            {
                dabba.push(c);
            }
            else if(c==')' && !dabba.empty() && dabba.top()=='(' )
            {
                dabba.pop();
            }
            else if(c=='}' && !dabba.empty() && dabba.top()=='{' )
            {
                dabba.pop();
            }
            else if(c==']' && !dabba.empty() && dabba.top()=='[' )
            {
                dabba.pop();
            }
            else
            {
                return false;
            }                  
        }
        return dabba.empty();
    }
};