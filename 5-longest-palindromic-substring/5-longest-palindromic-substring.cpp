class Solution {
public:
    string longestPalindrome(string s) {
        const int N = s.size();
        string res;
        for (int i = 0; i < N; i++) {
            for (int j = i; j < N; j++) {
                if (j - i + 1 >= res.size() && isPalindrome(s, i, j)) {
                    res = s.substr(i, j - i + 1);
                }
            }
        }
        return res;
    }
    //[start, end]
    bool isPalindrome(string& s, int start, int end) {
        int l = start, r = end;
        while (l <= r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }
};