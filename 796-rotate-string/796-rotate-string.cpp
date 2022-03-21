class Solution {
public:
    bool rotateString(string s, string goal) { 
        return(s.length() == goal.length() && (s+s).find(goal)!= string::npos);
    }
};

//if A = 'abcde'
//then A+A = 'bcdeabcde' contains all the required combination