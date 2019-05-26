#include <strings.h>
int lengthOfLongestSubstring(char* s) {
    int     i = 0;
    int     j = 0;
    int     map[128];
    int     max_len = 0;
    memset(map, -1, sizeof(int)*128);
    while (s[j])
    {
        if (map[s[j]] < i)
            map[s[j]] = j;
        else
        {
            i = map[s[j]] + 1;
            map[s[j]] = j;
        }
        if (j - i + 1 > max_len)
            max_len = j - i + 1;
        j++;
    }
    return (max_len);
}