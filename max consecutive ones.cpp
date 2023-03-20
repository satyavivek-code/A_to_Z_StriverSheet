

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 ;
        int maxlength = 0;
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == 1){
                count++;
                if (count > maxlength){
                    maxlength++;
                }
            }
            else if (nums[i] == 0){
                count = 0;
            }   
        }
        return maxlength;
    }
};
