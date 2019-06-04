int reverse(int x) {
    int pop;
    int acc = 0;
    
    while(x) {
        pop = x % 10;
        x /= 10;
        if( ( (INT_MAX/10) < acc || ((INT_MAX/10) == acc && (INT_MAX%10) < pop) ) ||
            ( (INT_MIN/10) > acc || ((INT_MIN/10) == acc && (INT_MIN%10) > pop) ) ) {
            return 0;
        }
        acc = acc * 10 + pop;            
    }
    return acc;
}