class Solution {
private:
    int solution (int mid, vector<int>nums){
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i <n; i++){
            sum += (nums[i] / mid);

            if (nums[i]%mid != 0){
                sum+= 1;
            }
        }
        return sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int start = 1; 
        int ans = 0;
        int end = *max_element(nums.begin(), nums.end());
        while (start <= end){
            int mid = start + (end - start) / 2;

            if(solution(mid, nums)<= threshold){
                ans = mid;
                end = mid -1;
            }
            else{
                start = mid + 1;
            }
        }
        return ans;

    }
};
