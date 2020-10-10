int Solution::hammingDistance(const vector<int> &A) {
    vector<int> B = A;
    long long distance =0;
    for(int i=0;i<32;i++)
    {
        vector<int> cmp;
        for(int j=0;j<B.size();j++)
        {
            cmp.push_back(B[j]%2);
            B[j] = B[j]/2;
        }
        long long num_z =0;
        for(int j=0;j<cmp.size();j++)
        {
            if(cmp[j]==0) num_z ++;
        }
        long long num_o = cmp.size()-num_z;
        distance += 2*num_z*num_o;
        
    }
    return distance%1000000007;
}
