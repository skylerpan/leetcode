class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pivot = search_max(nums);
        if(pivot < 0)
            return -1;
        if(target >= nums[0] || pivot == nums.size()-1)
            return bin_search(nums, 0, pivot, target);
        else
            return bin_search(nums, pivot+1, nums.size()-1, target); 
    }
    int search_max(vector<int>& nums) {
        int l = 0, r = nums.size()-1;
        if(r < 1 || nums[l] < nums[r])
            return r;
        while(1) {
            int mid = l + (r - l) / 2;
            if(nums[mid] > nums[l])
            {
                l = mid;
            }
            else 
            {
                r = mid;
            }
            if(l == r)
                return l;
        }
    }
    int bin_search(vector<int>& nums, int l, int r, int target) {
        if(target < nums[l] || target > nums[r])
            return -1;
        while(1) {
            int mid = l + (r - l) / 2;
            if(nums[mid] == target)
                return mid;
            else if(l > r)
                return -1;
            else if(nums[mid] > target)
            {
                r = mid-1;
            }
            else 
            {
                l = mid+1;
            }
        }
    }
};