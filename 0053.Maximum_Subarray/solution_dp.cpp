class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sub = nums[0];
        int ans = nums[0];
        for(int i = 1; i < nums.size(); ++i){
            sub = max(nums[i], sub+nums[i]);
            ans = max(ans, sub);
        }
        return ans;
    }
};