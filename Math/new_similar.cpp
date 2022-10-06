/*
Problem Description

Given a number A in a form of string.

You have to find the smallest number that has same set of digits as A and is greater than A.

If A is the greatest possible number with its set of digits, then return -1.
*/

string Solution::solve(string A) {
    int size = A.size();
    int flag =0;
    for(int i =size-1;i>0;i--){
        if(A[i-1]<A[i]){
            flag =1;
            sort(A.begin()+i,A.end());
            for(int j=i;j<size;j++){
                if(A[j]>A[i-1]){
                    swap(A[i-1],A[j]);
                    break;
                }
            }
            break;
        }
    }
    if(flag) return A;
    else return "-1";
}
