class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator ip;
        int size=nums.size();
        ip = std::unique(nums.begin(), nums.begin() + size);
        nums.resize(distance(nums.begin(), ip));
        return nums.size();
    }
};