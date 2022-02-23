class Solution {
public:
    int strStr(string haystack, string needle) {
        int n_sz=needle.length(), h_sz=haystack.length();
        if (h_sz < n_sz) return -1;
        for (int i=0; i <= h_sz-n_sz; i++){
            if (string (haystack.begin()+i, haystack.begin()+i+n_sz) == needle) return i;
        }
        return -1;    }
};