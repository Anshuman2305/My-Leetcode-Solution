class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        int i = 0;
        for(auto x : pushed)
        {
            s.push(x);
            while(s.size() != NULL && s.top() == popped[i])
            {
                s.pop();
                i++;
            }
        }
        return s.size()==0;
    }
};