int Solution::removeDuplicates(vector<int> &A) {
    if(A.size()==1) return 1;
    int k = 0;
    for(int i = 1; i < A.size(); i++){
        if(A[k] != A[i]){
            A[k+1] = A[i];
            k++;
        }
    }
    
    A.erase(A.begin()+k+1, A.end());
    return k+1;
}
