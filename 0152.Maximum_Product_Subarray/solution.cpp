class Solution {
public:
    int maxProduct(vector<int>& nums) {
        dp_max = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int max_num = INT_MIN, sub = 1;
            for(int j = i; j < nums.size(); j++)
            {
                sub *= nums[j];
                max_num = max(sub, max_num);
            }
            dp_max = max(dp_max, max_num);
        }
        return dp_max;
    }
private:
    int dp_max;
};
