using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        ans.clear();
        for(int i = 0; i <numRows; i++)
        {
            ans.push_back(
                genNextRow(i == 0 ? *(new vector<int>()) : ans[i-1])
            );
        }
        return ans;
    }
private:
    vector<int> &genNextRow(vector<int> &v)
    {
        vector<int> *res = new vector<int>();
        res->push_back(1);
        if(v.empty())
            return *res;
        for(auto it = v.begin(); it != v.end()-1; it++) {
               res->push_back(it[0] + it[1]);
        }
        res->push_back(1);
        return *res;
    }
    vector<vector<int>> ans;
};