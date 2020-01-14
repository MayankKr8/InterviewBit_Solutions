//Once we have sorted numbers all we have to do is to traverse through them once taking two numbers at a time and calculating to see if their XOR value is the minimum obtained so far
//The sorting can be done in NlogN and traversal in N, hence the complexity is O(NlogN).
int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(),A.end());
    //for(int i=0;i<A.size();i++) cout<<A[i]<<" ";
    //cout<<endl;
    int ans = INT_MAX;
    for(int i=0;i<A.size()-1;i++)
    {
        //cout<<(A[i]^A[i+1])<<endl;
        if((A[i]^A[i+1])<ans) ans = A[i]^A[i+1];
    }
    return ans;
}
