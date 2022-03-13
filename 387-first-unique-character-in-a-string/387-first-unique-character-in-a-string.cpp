class Solution {
public:
    int firstUniqChar(string s) {
       unordered_map<char, int> m;
        int size = s.length();
        for(int i = 0; i < size; i++)
            m[s[i]]++;
        for(int i = 0; i < size; i++) {
            if(m[s[i]] == 1)
                return i;
        }
        return -1;
    }
};