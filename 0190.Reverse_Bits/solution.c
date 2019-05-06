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