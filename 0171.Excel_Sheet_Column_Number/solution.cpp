class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        for(auto it : s)
        {
            ans *= 26;
            ans += it - 'A' + 1;
        }
        return ans;
    }
};