int Solution::titleToNumber(string A) {
    int ans =0;
    for(int i=0;i<A.size();i++)
    {
        ans += (int(A[A.size()-1-i])-64)*pow(26,i);
    }
    return ans;
}
