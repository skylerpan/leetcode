#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = -1, r = -1;
        ans = {-1,-1};
        if(nums.empty())
            return ans;
        l = binary_search(&nums, 0, nums.size()-1, target, 1);
        //cout << "---"<< l << endl;
        r = binary_search(&nums, 0, nums.size()-1, target, 0);
        //cout << "+++"<< r << endl;
        ans[0] = l;
        ans[1] = r;
        return ans;
    }
    int binary_search(vector<int> *nums, int start, int end, int target, int l)
    {
        int n = end - start;
        if(n == 0) {
            if((*nums)[start] == target)
                return start;
            else
                return -1;
        }
        //cout << "==[" <<  start + n/2 << "] " << (*nums)[start + n/2] << endl;
        if((*nums)[start + n/2] == target)
        {
            if(l)
                return binary_search(nums, start, start + (n/2), target, l);
            else {
                if((*nums)[start + n/2 +1] != target)
                    return  start + n/2;
                else
                    return binary_search(nums, start + (n/2) + 1, end, target, l);
            }
        }
        if((*nums)[start + n/2] > target) {
            //cout << "--[" << start <<","<< start + n/2 << "]" << endl;
            return binary_search(nums, start, start + (n/2), target, l);
        }
        else {
            //cout << "++[" << start + (n/2) +1<<","<< end << "]" << endl;
            return binary_search(nums, start + (n/2) +1, end, target, l);
        }
    }
private:
    vector<int> ans;
};

int main()
{
    Solution s;
    vector<int> nums = {5,7,7,8,8,10};
    //vector<int> nums = {8,8,8,8,8,8};
    vector<int> res = s.searchRange(nums, 7);
    cout << res[0] << " "<< res[1] << endl;
}