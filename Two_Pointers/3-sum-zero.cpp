vector<vector<int> > Solution::threeSum(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int>> ans;
    if(A.size()<3) return ans;
    int sum;
    for(int i=0;i<A.size()-2;i++)
    {
        int l = i+1, r =A.size()-1;
        if (i>0 && A[i]==A[i-1]) 
            continue;
        while(l<r)
        {
            sum =A[i]+A[l]+A[r];
    
            if(sum==0)
            {
                //cout<<sum<<" "<<l<<" "<<r<<endl;
                vector<int> dummy;
                dummy.push_back(A[i]);
                dummy.push_back(A[l]);
                dummy.push_back(A[r]);
                int s =ans.size();
                if(s>0 && dummy[0]==ans[s-1][0] && dummy[1]==ans[s-1][1] && dummy[2]==ans[s-1][2]); 
                else ans.push_back(dummy);
                l++;
                r--;
                
            }
            else
            {
                if(sum<0) l++;
                else r--;
            }
        }
        
    }
    return ans;
}
