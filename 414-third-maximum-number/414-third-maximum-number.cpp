class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>::iterator ip;
        ip = unique(nums.begin(),nums.end()); //removing duplicates
        nums.resize(distance(nums.begin(),ip)); //resize to new vector size
        int n=nums.size();

        
        if(n<3) return nums[n-1];
        
        return nums[n-3];
    }
};