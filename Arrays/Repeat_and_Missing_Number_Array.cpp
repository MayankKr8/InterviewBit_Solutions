// We maintain two sum variables which are the sum of difference bwtween the ith entry in the array and ith natural number and sum of difference of square of the two.
// Hence if r is the repeated number and m is the missing number we have "r-m" and "r2 -m2", using the two we obtain r and m

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int m,r;
    long long sum =0,s_sum=0,add;
    for(int i=0;i<A.size();i++)
    {
        sum += A[i]-i-1;
        s_sum += (long long)A[i]*(long long)A[i] - (long long)(i+1)*(long long)(i+1);
    }
    add = s_sum/sum;
    add += sum;
    r  = add/2;
    m = r - sum;
    for(int i=0;i<A.size();i++)
    {
        A[i] += carry;
        carry = A[i]/10;
        A[i] = A[i]%10;
    }
    vector<int> ans;
    ans.push_back(r);
    ans.push_back(m);
    return ans;
    
}
