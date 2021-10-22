//The basic approach is to do what you did as a child while adding numbers on your notebook
//One digit at a time from right to left, while maintaining a carry

vector<int> Solution::plusOne(vector<int> &A) {
    clock_t tStart = clock();
    
    reverse(A.begin(),A.end());
    int carry=1,adder=1;
    for(int i=0;i<A.size();i++)
    {
        A[i] += carry;
        carry = A[i]/10;
        A[i] = A[i]%10;
    }
    if(carry) A.push_back(carry);
    if(A.front()==0 && A.size()>1) A.erase(A.begin());
    reverse(A.begin(),A.end());
printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return A;
}
