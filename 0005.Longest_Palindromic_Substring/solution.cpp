class Solution {
public:
    string longestPalindrome(string s) {
        int max = 0, max_l = 0, max_r = 0;
        if(s.empty() || (s.size() == 1) || (s.size() == 2 && s[0] == s[1]))
           return s;
        for(int j = 1; j <= 2; j++) {
            for(int i = 0; i < s.size()-j; i++) {
                int start = i, end = i+j, res;
                res = isPalindromic(s, start, end);
                if(res && (end - start) > max) {
                    max = end - start;
                    max_l = start;
                    max_r = end;
                }
                continue;
            }
        }
        return s.substr(max_l, max+1);
    }
    bool isPalindromic(string s, int &start, int &end) 
    {
        int l = start, r = end, res = false;
        if(s[l] != s[r])
            return res;
        while(s[l] == s[r])
        {
            res = true;
            if(l-1 < 0 || r+1 == s.size()) {
                break;
            }
            else {
                --l;
                ++r;
            }
        }
        if(s[l] != s[r]) {
            ++l;
            --r;
        }
        start = l;
        end = r;
        return res;   
    }
};