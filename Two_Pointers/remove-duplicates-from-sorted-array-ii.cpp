int Solution::removeDuplicates(vector<int> &A) {
    int l=A.size(),k=0;
    if(l==0 || l==1 || l==2) return l;
    for(int i=2;i<A.size();i++)
    {
        if(A[i]!=A[k])
        {
            A[k+2] =A[i];
            k++;
        }
    }
    A.erase(A.begin()+k+2, A.end());
    return A.size();
    
}
