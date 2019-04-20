#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int i, j, first_str_len;

    first_str_len = strsSize == 0 ? 
        0 : strlen(strs[0]);
        
    if(first_str_len == 0)
        return "";

    for(i = 0; i < first_str_len; i++) {
        for(j = 0; j < strsSize; j++) {
            if(strs[0][i] != strs[j][i])
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main(void)
{   
    char str1[100] = {"flower"};
    char str2[100] = {"flow"};
    char str3[100] = {"flight"};

    char *strs[] = {
        str1,
        str2,
        str3
    };

    printf("%s\n", 
        longestCommonPrefix(strs, sizeof(strs)/sizeof(strs[0]))
        );

    return 0;
}