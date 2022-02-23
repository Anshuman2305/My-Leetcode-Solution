class Solution {
public:
    int strStr(string haystack, string needle) {
        int n_sz=needle.length(), h_sz=haystack.length();
        if (h_sz < n_sz) return -1;
        for (int idx=0; idx <= h_sz-n_sz; idx++){
            if (string (haystack.begin()+idx, haystack.begin()+idx+n_sz) == needle) return idx;
        }
        return -1;
    }
};