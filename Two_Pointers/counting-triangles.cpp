int Solution::nTriang(vector<int> &A) {
    int ans =0, m=1000000007;
    if(A.size()<3) return ans;
    for(int i= A.size()-1;i>=0;i--)
    {
        int j=0,k=i-1;
        while(j<k)
        {
            if(A[j]+A[k]>A[i]) 
            {
                ans  = (ans+(k-j)%m)%m;
                k--;
            }
            else j++;
        }
    }
    return ans;
}
