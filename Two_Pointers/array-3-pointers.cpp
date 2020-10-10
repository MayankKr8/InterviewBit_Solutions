int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0,j=0,k=0;
    int ans = INT_MAX;
    while(i<A.size() && j<B.size() && k<C.size())
    {
        int maxm = max(max(A[i],B[j]),C[k]);
        int minm = min(min(A[i],B[j]),C[k]);
        if(ans>(maxm-minm)) ans = maxm-minm;
        if(A[i]==minm) i++;
        if(B[j]==minm) j++;
        if(C[k]==minm) k++;
        
    }
    return ans;
}

