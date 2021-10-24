int Solution::nTriang(vector<int> &A) {
    int ans =0, m=1000000007;
    if(A.size()<3) return ans;
    long long sum =0,s_sum=0,add;
    for(int i=0;i<A.size();i++)
    {
        sum += A[i]-i-1;
        s_sum += (long long)A[i]*(long long)A[i] - (long long)(i+1)*(long long)(i+1);
    }
    add = s_sum/sum;
    add += sum;
    r  = add/2;
    m = r - sum;
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
