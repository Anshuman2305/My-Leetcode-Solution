class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.length() < needle.length()) return -1;
        for (int idx=0; idx <= haystack.length()- needle.length(); idx++){
            if (string (haystack.begin()+idx, haystack.begin()+idx+needle.length()) == needle) return idx;
        }
        return -1;
    }
};