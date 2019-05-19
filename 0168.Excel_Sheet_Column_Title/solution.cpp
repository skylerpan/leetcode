using namespace std;
#define ALPHABET 26
class Solution {
public:
    string convertToTitle(int n) {
        string ans = {""};
        if(n == 0) return ans;
        do {
            ans += 'A'+ ((--n) % ALPHABET);
            n /= ALPHABET;
        } while(n);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};