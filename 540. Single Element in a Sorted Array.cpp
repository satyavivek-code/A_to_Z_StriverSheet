/*
LeetCode Solution
*/

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int xOR = 0;
        for (int i = 0; i <nums.size(); i++){
            xOR^=nums[i];
        }
        return xOR;
    }
};
