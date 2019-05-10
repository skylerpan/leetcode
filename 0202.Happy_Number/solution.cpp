#include<iostream>
#include<map>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        unsigned int in = n, out;
        int i = -1;
        recode.clear();
        recode[n] = 1;
        while(in != 1) {
            for(i = 0; in != 0; i++) {
                if( i == 0 )
                    out = 0;
                out += (in % 10) * (in % 10);
                in /= 10;
            }
            if(recode.find(out) != recode.end())
                return false;
            recode[out] = 1;
            in = out;
        }
        return true;
    }
private:
    map<int,int> recode;
};

int main() {
    Solution s;
    cout << s.isHappy(19) << "\n";
    cout << s.isHappy(111) << "\n"; 
    cout << s.isHappy(1) << "\n"; 
}