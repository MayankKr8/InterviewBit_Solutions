int Solution::maxArea(vector<int> &A) {
    if(A.size()<2) return 0;
    int ans =INT_MIN;
    int l=0, r= A.size()-1;
    while(l<r)
    {
        int dummy= min(A[l],A[r])*(r-l);
        if(ans<dummy) ans = dummy;
        if(A[l]<A[r]) l++;
        else r--;
    }
    return ans;
}
