#include <math>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        for(int i = nums.size()-2; i > -1; i--) {
            int next_greater = i;
            for(int j = i+1; j < nums.size(); j++) {
                if( nums[j] > nums[i] ) {
                    if(next_greater == i)
                        next_greater = j;
                    else
                        next_greater = nums[j] < nums[next_greater] ? j : next_greater;
                }
            }
            if(next_greater == i)
                continue;
            swap(nums[i], nums[next_greater]);
            sort(nums.begin()+i+1, nums.end());
            return;
        }
        sort(nums.begin(), nums.end());
    }
};