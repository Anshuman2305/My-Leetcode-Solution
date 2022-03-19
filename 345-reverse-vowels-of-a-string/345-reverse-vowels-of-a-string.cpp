class Solution {
public:
    bool isVowel(char c){
        if('A' <= c && c <= 'Z') c = c - 'A' + 'a';
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    
    string reverseVowels(string s) {
        int low = 0, high = s.size() - 1;
        while(low < high){
            while(low < high && !isVowel(s[low])) low++;
            while(low < high && !isVowel(s[high])) high--;
            if(low < high) swap(s[low++], s[high--]);
        }
        return s;
    }
};