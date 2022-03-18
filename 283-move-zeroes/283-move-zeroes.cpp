class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
       if (nums.size() == 0 || nums.empty()) return;
        int idx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[idx++] = nums[i];
            }
        }
        while (idx < nums.size()) {
            nums[idx++] = 0;
        }
        return;
        
        
    }
};