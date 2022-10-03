/*
Problem Description

Given an array A of size N. You need to find the sum of Maximum and Minimum element in the given array.

NOTE: You should make minimum number of comparisons.
*/

vector<int> help(vector<int> A, int low, int high){
    //cout<<low<<" "<<high<<endl;
    vector<int> ans;
    if ((high-low)<2){
        ans.push_back(min(A[low],A[high]));
        ans.push_back(max(A[low],A[high]));
    }
    else{
        int mid = (high+low)/2;
        vector<int> v1 = help(A,low,mid);
        vector<int> v2 = help(A,mid+1,high);
        ans.push_back(min(v1[0],v2[0]));
        ans.push_back(max(v1[1],v2[1]));
     }
    return ans;
}
int Solution::solve(vector<int> &A) {
    int size = A.size();
    vector<int> values = help(A,0,size-1);
    int ans = values[0]+values[1];
    return ans;
}
