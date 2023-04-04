#include<iostream>
#include<vector>

using namespace std;

vector<int>majorityElement(vector<int>& nums){
    int n = nums.size();
    vector<int> ans, positive, negative;

    for (int i = 0; i < n; i++) {
        if (nums[i] >= 0){
            positive.push_back(nums[i]);
        }
        else{
            negative.push_back(nums[i]);
        }
    }
    for (int i = 0; i < n; i++) {
        ans.push_back(positive[i]);
        ans.push_back(negative[i]);
    }
    return ans;

}
int main(){

    vector<int> nums{3,1,-2,-5,2,-4};
    vector<int>ans;
    ans = majorityElement(nums);
    cout << "The array before rearrangement is " << "--> ";
    for(int i = 0; i < nums.size(); i++){
    
    cout << nums[i] << " ";
    } cout <<endl;
    cout << "The array after rearrangement is " << "--> ";

    for(int i = 0; i < nums.size(); i++){
        
        cout << ans[i] << " ";
    }cout <<endl;
    
    return 0;
}