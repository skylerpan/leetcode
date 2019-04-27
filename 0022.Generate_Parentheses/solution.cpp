class Solution {
public:
    
    void dfs(string a, int opened, int closed, int n, vector<string> &res){
        if(opened == closed && opened == n){
            res.push_back(a);
            return;
        }
        if(opened < n){
            dfs(a+"(", opened+1, closed, n, res);
        }
        if(closed < opened){
            dfs(a+")", opened, closed+1, n, res);
        }
    }

    vector<string> generateParenthesis(int n) {
        string s;
        vector<string> res;
    
        dfs(s, 0, 0, n, res);
            
        return res;
        
    }
};