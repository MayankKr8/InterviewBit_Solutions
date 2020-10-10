int Solution:: solve(vector<int> &A, int B, int C) {
    vector<int> dig_c;
    int ans =0,dummy, i=C;
    while(i>0)
    {
        dummy = i%10;
        dig_c.push_back(dummy);
        i = i/10;
    }
    if(B>dig_c.size() || A.size()==0 ||C==0) return 0;
    if(B<dig_c.size())
    {
        if(B!=1 && A[0]==0) return (A.size()-1)*pow(A.size(),B-1);
        else return pow(A.size(),B);
    }
    else
    {
        reverse(dig_c.begin(),dig_c.end());
        vector<int> lower(11);
        for(int i=0;i<=10;i++) lower[i]=0;
        for(int i=0;i<A.size();i++)
        {
            for(int k =A[i]+1;k<=10;k++)
                {
                    lower[k]++;
                }
        }
        bool flag= true;
        for(int i=0;i<dig_c.size();i++)
        {
            ans *= A.size();
            if(flag) 
            {
                ans += lower[dig_c[i]];
                //cout<<ans<<endl;
                if(i==0 && A[0]==0 && B!=1) ans --;
            }
            flag  = flag && (lower[dig_c[i]]+1 == lower[dig_c[i]+1]);
            //cout<<ans<<endl;
        }
    }
    return ans;
}