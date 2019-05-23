// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        while(1)
        {
            int mid = left + (right - left) / 2;
            if(left == mid || right == mid)
                return isBadVersion(left) ? left : right;
            if(isBadVersion(mid))
                right = mid;
            else
                left = mid;
        }
    }
};