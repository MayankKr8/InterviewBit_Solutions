vector<int> Solution::primesum(int A) {
printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    vector<int> ans;
    for(int i=2;i<=A/2;i++)
    {
        int i_ = A-i;
        int flag = 0;
        for (int j =2;j<=sqrt(i);j++)
        {
            if(i%j==0) flag =1;
        }
        for (int j =2;j<=sqrt(i_);j++)
        {
            if(i%j==0) flag =1;
        }
        if(flag==0)
        {
            ans.push_back(i);
            ans.push_back(i_);
            return ans;
        }
    }
}
