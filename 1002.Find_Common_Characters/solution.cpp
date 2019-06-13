#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> overall(26, 0);
        
        for(int j = 0; j < A[0].size(); j++)    overall[A[0][j] - 'a']++;
        
        for(int i = 1; i < A.size(); i++){
            vector<int> current(26, 0);
            for(int j = 0; j < A[i].size(); j++){
                current[A[i][j] - 'a']++;
            }
            for(int k = 0; k < 26; k++) overall[k] = min(overall[k], current[k]);
            
        }
        
        vector<string> result;
        for(int i = 0; i < overall.size(); i++){
            for(int j = 0; j < overall[i]; j++){
                result.push_back(string(1, 'a' + i));
            }
        }
        
        return result;
    }
};
int main() {
    Solution s;
    vector<string> A = {"bella","label","roller"};
    for(auto& it : s.commonChars(A))
        cout << it << " ";
    cout << endl;
}