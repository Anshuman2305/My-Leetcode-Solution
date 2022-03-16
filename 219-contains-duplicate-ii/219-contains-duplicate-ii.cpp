class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++)
        {
            if(set.count(nums[i])) return true; //count() return 1 if no. found in set and 0 if not found
            
            set.insert(nums[i]);
            
            if(set.size()>k)
                set.erase(nums[i-k]);
        }
        return false;
    }
};