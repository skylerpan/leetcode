#if 1
//abcdefgh -> efghabcd -> ghefcdab -> hgfedcba
uint32_t reverseBits(uint32_t n) {
    n = (n >> 16) | (n << 16);
    n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8);
    n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4);
    n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2);
    n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1);
    return n;
}
#else
#if 1
uint32_t reverseBits(uint32_t n) {
  uint32_t res = 0;
  for(int i = 0; i < 32; i++)
  {
    res |= (n & 0x1) << (31 -i);
    n = n >> 1;
  }
  return res;
}
#else
uint32_t reverseBits(uint32_t n) {
    uint32_t i, res = 0;
    for(i = 0; i < 32; i++) {
        res |= n & 1;
        if(i < 31){
            n >>= 1;
            res <<= 1;
        }
    }
    return res;
}
#endif
#endif