// The problem language is confusing but all it says is to reverse the bits of a 32 bit number, assuming 32 bits for every number( 0 padding in from)

unsigned int Solution::reverse(unsigned int A) {
    unsigned int ans =0;
    for(int i=0;i<32;i++)
    {
       unsigned int divs = pow(2,31-i);
       int bit  = A/divs;
       if(bit==1) ans += pow(2,i);
       A = A%divs;
    }
    return ans;
}
