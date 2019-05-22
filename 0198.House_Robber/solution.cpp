#include <math>
class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> dp_max;
        int rob_max = 0;
        for(int i = 0; i < nums.size(); i++) {
            dp_max.push_back(max( i > 2 ? dp_max[i-3] : 0, i > 1 ? dp_max[i-2] : 0) + nums[i]);
            rob_max = max(dp_max[i], rob_max);
        }
        return rob_max;
    }
};