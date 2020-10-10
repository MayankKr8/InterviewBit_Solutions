void Solution::sortColors(vector<int> &A) {
    int r=0,g=0,b=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]==0) r++;
        if(A[i]==1) g++;
        if(A[i]==2) b++;
    }
    int k=0;
    while(r>0) 
    {
        A[k]=0;
        r--;
        k++;
    }
    while(g>0) 
    {
        A[k]=1;
        g--;
        k++;
    }
    while(b>0) 
    {
        A[k]=2;
        b--;
        k++;
    }
}