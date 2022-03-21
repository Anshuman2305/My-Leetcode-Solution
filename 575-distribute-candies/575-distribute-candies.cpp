class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        unordered_map<int,int> m;
        int i = 0; 
        while (i < n)
        {
           m[candyType[i]]++;
            i++;
        }
        if(n/2 >= m.size()) return m.size();
        else return n/2;
        
        return -1;       
        
        
    }
};