int Solution::threeSumClosest(vector<int> &A, int B) {
    if(A.size()<3) return 0;
    sort(A.begin(),A.end());
    int mindiff = INT_MAX,ans, sum;
    for(int i=0;i<A.size()-2;i++)
    {
        int l = i+1, r =A.size()-1;
        while(l<r)
        {
            sum =A[i]+A[l]+A[r];
            if(abs(sum-B)==0) return B;
            if(abs(sum-B)<mindiff) 
            {
                mindiff = abs(sum-B);
                ans = sum;
            }
            //cout<<sum<<" "<<ans<<endl;
            if(sum<B) l++;
            else r--;
        }
        
    }
    return ans;
}
