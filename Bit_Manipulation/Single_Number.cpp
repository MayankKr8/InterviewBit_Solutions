//The logic behind is simple is the any number xored with itself is 0 and any number xored with 0 is itself.
// All we have to do is to xor all the elements of the array and we will have the result as the number.
int Solution::singleNumber(const vector<int> &A) {
    int a = 0;
    for(int i=0;i<A.size();i++)
    {
        a = a^A[i];
    }
    return a;
}
