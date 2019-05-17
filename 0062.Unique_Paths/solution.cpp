class Solution {
public:
    int uniquePaths(int m, int n) {
        int map[m*n] = {1};
        for(int i = 0; i < m*n; i++)
        {
            map[i] += i - 1 >= 0 && i % m != 0 ? map[i-1] : 0;
            map[i] += i - m >= 0 ? map[i-m] : 0;
        }
        return map[m*n-1];
    }
};