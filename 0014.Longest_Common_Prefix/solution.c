#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int i = 0, j;

    if(strsSize == 0 || strs[0][0] == 0)
        return "";

    do {
        for(j = 0; j < strsSize; j++) {
            if(strs[0][i] != strs[j][i])
            {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    } while(strs[0][++i] !='\0');


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