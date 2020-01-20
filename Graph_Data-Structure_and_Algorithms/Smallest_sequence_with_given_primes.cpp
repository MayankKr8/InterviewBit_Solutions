// We find the smallest element from all our choices and push it to the answer
//We then push all the prime numbers multiplied with the last element pushed to all our prospective answers

//You can use a min heap or self-implementation like here. Do keep in mind to not insert a number twice.
vector<int> Solution::solve(int A, int B, int C, int D) {
    int a=0,b=0,c=0;
    vector<int> tmp,ans;
    tmp.push_back(1);
    for(int i=0;i<D;i++)
    {
        int temp = min(min(A*tmp[a],B*tmp[b]),C*tmp[c]);
        ans.push_back(temp);
        tmp.push_back(temp);
        if(temp==A*tmp[a]) a++;
        if(temp==B*tmp[b]) b++;
        if(temp==C*tmp[c]) c++;
    }
    return ans;
}
