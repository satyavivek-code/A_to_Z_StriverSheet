/*
Two Pointer Approach
positive = 0
negative = 0

and Traverse through the vector 
*/
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        int pos = 0;
        int neg = 1;

        for (auto num : nums){
            if (num > 0){
                ans[pos] = num;
                pos += 2;
            }
            else if(num < 0){
                ans[neg] = num;
                neg +=2;
            }
        }
        return ans;
        
    }
  
  
  /*
  by taking extra space vector to store the elements
  */
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        vector<int>ans;
        vector<int>positive;
        vector<int>negative;

      // store only positive element 
      
        for(int i = 0; i < size; i++){
	        if (nums[i] > 0){
	            positive.push_back(nums[i]);
	        }
          
      // store only negative element 
          
	        else if(nums[i] < 0){
	            negative.push_back(nums[i]);
	        }
        }
      
      // push positive and negative element at alternative position 
      
        for (int j = 0; j < negative.size(); j++){
            ans.push_back(positive[j]);
            ans.push_back(negative[j]);
        }
        return ans;
    }
};
