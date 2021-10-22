//The approach is very simple. As the number is a 32 bit integer all we have to do is to check if every one of the 32 bits and see if they are 1.
// The complexity is a constant (32)

int Solution::numSetBits(unsigned int A) {
vector<int> dummy;
        dummy.push_back(A->val);
        ans.push_back(dummy);
        dummy.clear();
        if(A->left) chd.push_back(A->left);
        if(A->right) chd.push_back(A->right);
    int count =0;
    if(A==0 or A==1) return A;
    for(int i=0;i<32;i++)
    {
        if(A%2==1) count++;
        A=A/2;
        if(A==0) break;
    }
    return count;
    
}
