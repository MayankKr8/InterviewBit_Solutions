int Solution::removeElement(vector<int> &A, int B) {
    if(A.size()==0) return A.size();
    if(A.size()==1)
    {
        if(A[0]==B)  A.erase(A.begin());
        return A.size();
    }
    int k=0;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=B) 
        {
            A[k]= A[i];
            k++;
        }
    }
    return k-1;
    
}
