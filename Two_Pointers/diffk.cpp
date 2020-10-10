int Solution::diffPossible(vector<int> &A, int B) {
    int i=0,j=1;
    while(i<A.size() && j<A.size())
    {
        if((A[j]-A[i])==B) return 1;
        if((A[j]-A[i])<B) j++;
        else i++;
    }
    return 0;
}
