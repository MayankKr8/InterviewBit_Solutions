long long fac(int A)
{
    if(A==0 || A==1) return 1;
    else return A*fac(A-1)%1000000007;
}
long long f_exp(long long x, long long y)
{
    long long res =1;
    while(y>0)
    {
        if(y%2!=0)
        {
            res = (res*x)%1000000007;
        }
        y /= 2;
        x = (x*x)%1000000007;
    }
    return res;
}
int Solution::solve(int A, vector<int> &B) {
    sort(B.begin(), B.end());
    long long ans, count=0;
    vector<int> groups;
    if(B[0]!=1) groups.push_back(B[0]-1);
    for(int i=0;i<B.size()-1;i++)
    {
        if((B[i+1]-B[i]-1)!=0) groups.push_back(B[i+1]-B[i]-1);
    }
    if(B[B.size()-1]!=A) groups.push_back(A-B[B.size()-1]);
    for(int i=0;i<groups.size();i++) count += groups[i];
    ans = fac(count);
    ans = ans%1000000007;
    long long denom =1;
    for(int i=0;i<groups.size();i++)
    {
        denom *= fac(groups[i]);
        denom = denom%1000000007;
    }
    ans  *= f_exp(denom,1000000005)%1000000007;
    ans = ans%1000000007;
    cout<<ans<<endl;
    if(B[0] !=1) groups[0]=1;
    if(B[B.size()-1] != A) groups[groups.size()-1] = 1;
    for(int i=0;i<groups.size();i++) 
    {
        long long  mult = pow(2,groups[i]-1);
        mult  = mult%1000000007;
        ans = ans*mult;
        ans = ans%1000000007;
        cout<<ans<<endl;
    }
    return ans;
    
}
