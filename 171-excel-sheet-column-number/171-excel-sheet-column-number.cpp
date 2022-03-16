class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;
        for(char c: columnTitle)
        {
            int d = c - 'A' + 1; //for A, d=1 and like that
            result = result*26 + d; 
        }
        return result;
    }
};