class Solution {
public:
    vector<int> countBits(int num) {
        int map[16]={
            0,1,1,2,
            1,2,2,3,
            1,2,2,3,
            2,3,3,4};
        vector<int> ans;
        ans.clear();
        for(int i = 0; i <= num; i++)
            ans.push_back(
              map[(i&0xF)         >>  0] 
            + map[(i&0xF0)        >>  4]
            + map[(i&0xF00)       >>  8]
            + map[(i&0xF000)      >> 12]
            + map[(i&0xF0000)     >> 16]
            + map[(i&0xF00000)    >> 20]
            + map[(i&0xF0000000)  >> 24]
            + map[(i&0xF00000000) >> 28]
        );
        return ans;
    }
};