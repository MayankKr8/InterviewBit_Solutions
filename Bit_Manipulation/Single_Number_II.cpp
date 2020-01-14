//This is a classic bitmask problem.
// the resultant number say X if has 1 in the ith position, then the resultant mask will have 3m+1  ones at that position.
int Solution::singleNumber(const vector<int> &A) {
    int ones =0,twos =0, cbm;
    for(int i=0;i<A.size();i++)
    {
        twos = twos|(ones&A[i]);
        ones  = ones ^ A[i];
        cbm = ~(ones & twos); 
        ones &= cbm;
        twos &= cbm;
    }
    return ones;
}
