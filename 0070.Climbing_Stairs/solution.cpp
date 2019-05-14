#include <math>
class Solution {
public:
    int climbStairs_r(int n, int cache[]) {
        if(n <= 1)
            cache[n] = 1;
        else {
            if(cache[n-1] == 0)
               cache[n-1] = climbStairs_r(n-1, cache);
            if(cache[n-2] == 0)
               cache[n-2] = climbStairs_r(n-2, cache);
            cache[n] = cache[n-1] + cache[n-2];
        }
        return cache[n];
    }
    int climbStairs(int n) {
        int cache[n+1] = {0};
        return climbStairs_r(n, cache);
    }
};