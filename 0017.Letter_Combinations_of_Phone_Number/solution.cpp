#include <iostream>
#include <string>
#include <vector>

using namespace std;
string letter[10] = {
    string(" "),
    string("*"),
    string("abc"),
    string("def"),
    string("ghi"),
    string("jkl"),
    string("mno"),
    string("pqrs"),
    string("tuv"),
    string("wxyz"),
};
class Solution {
public:
    vector<string> ans;
    void letterCombinations_r(vector<string> &ans, string letters, string digits, int digit_index)
    {
        if(digits.size() == digit_index)
        {
            ans.push_back(letters);
            return;
        }
        for(auto it : letter[ (digits[digit_index] -'0') ]) {
            letterCombinations_r(ans, letters+it, digits, digit_index+1);
        }
    }
    vector<string> letterCombinations(string digits) {
        this->ans.clear();
        if(digits.size() != 0)
            letterCombinations_r(this->ans, string(""), digits, 0);
        return this->ans;
    }
};

int main( )
{
    Solution s;
    string str = string("23");
    s.letterCombinations(str);
    for(auto it : s.ans)
        cout << it << "\r\n";
    return 0;
}