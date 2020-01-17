// For a given set of numbers which are all 32 bit we evalute the problem one bit at a time.
// For a given bit if the numbers of elements having 1 be x  and having 0 be y then every number with 1 will add y to the total and every numbe 0 will add x to total. Hence the total raises by 2*x*y

int Solution::cntBits(vector<int> &A) {
    long long ans =0;
    for(int i=0;i<32;i++)
    {
        long long  num1 =0,numz=0;
        for(int j=0;j<A.size();j++)
        {
            if(A[j]%2==1) num1++;
            else numz++;
            A[j] = A[j]/2;
        }
        ans += 2*numz*num1;
        ans = ans%1000000007;
    }
    ans = ans%1000000007;
    return ans;
}
