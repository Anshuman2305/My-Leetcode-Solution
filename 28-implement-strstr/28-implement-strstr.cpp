class Solution {
public:
    int strStr(string haystack, string needle) {
        int count=0;
        if(needle.empty()) return 0;
        
        for(int i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[0])
            {
                int j;
                for(j=0;j<needle.length();j++)
                {
                    if(haystack[i+j]!=needle[j]) break;
                }
                if(j==needle.length()) return i;
            }
        }
        return -1;
    }
};