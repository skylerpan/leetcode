using namespace std;
#define ALPHABET 26
class Solution {
public:
    string convertToTitle(int n) {
        string ans = {""};
        while(n) {
            ans += 'A'+ ((--n) % ALPHABET);
            n /= ALPHABET;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};