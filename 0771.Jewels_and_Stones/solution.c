#include <stdlib.h>
enum {
    BS,  
    FST,
    END,
};

int cmp(const void *lhs, const void *rhs)
{
    return (int)((*(char*)lhs) - (*(char*) rhs)); 
}

int numJewelsInStones(char* J, char* S) {
    int len, nS=0;
    char *I_Have;
    
    I_Have = (char *) malloc(51);
    len = sprintf(I_Have,"%s",S);
    
    qsort((void *)I_Have, len, 1, cmp);
    
    while(J[0] != '\0') {
        int idx[3];
        void * target = bsearch((void *)J, (void *)I_Have, len, 1, cmp);
        
        if (target == NULL) {
            J++;
            continue;
        }
        
        idx[BS] = (char *) target - (char *) I_Have;
        idx[FST] = idx[BS];
        idx[END] = idx[BS];

        while(I_Have[idx[FST]-1] == J[0]) {
            idx[FST]--;
        }

        while(I_Have[idx[END]+1] == J[0]) {
            idx[END]++;
        }
        
        nS += idx[END] - idx[FST] + 1;
        J++;
    }
    
    free(I_Have);
    return nS;
}
