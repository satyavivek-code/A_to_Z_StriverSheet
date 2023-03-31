/*
Brute force approach-- By swapping the element of array 
*/


class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int end = nums.size();

        while (start < end){
            if (nums[start] > nums[end]){
                swap(nums[end], nums[start]);
            }
            start++;
            end--;
        }
    }
};
