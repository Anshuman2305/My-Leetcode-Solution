class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
    vector<pair<int,int>> num_pair;
    for(int i=0;i<n;i++)
        num_pair.push_back(make_pair(nums[i],i)); // TO STORE THEIR INDEX
    
    
    sort(num_pair.begin(),num_pair.end());
    int l=0,h=n-1;
    while(l<h)
    {
        if(num_pair[l].first+num_pair[h].first==target)
        {
            int p=num_pair[l].second;
            int p1=num_pair[h].second;
            
            if(p>p1) return {p1,p};
            return {p,p1};
        }
        else if(num_pair[l].first+num_pair[h].first<target) l++;
        else if(num_pair[l].first+num_pair[h].first>target) h--;
    }
    
    return {0,0};
    }
};

