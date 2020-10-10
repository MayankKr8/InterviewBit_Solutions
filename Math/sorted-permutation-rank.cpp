int fac(int A)
{
    if(A==0 || A==1) return 1;
    return (A*fac(A-1))%1000003;
}
int Solution::findRank(string A) {
    vector<int> charcs;
    for(int i=0;i<A.size();i++)
    {
        char temp = A[i];
        charcs.push_back(temp);
    }
    vector<int>charcs_org = charcs;
    sort(charcs.begin(),charcs.end());
    std::vector<int>::iterator it; 
    int rank =1,diff;
    for(int i=0;i<charcs_org.size();i++)
    {
        it = find (charcs.begin(), charcs.end(), charcs_org[i]);
        diff = it - charcs.begin();
        rank += (diff*fac(charcs.size()-1))%1000003;
        charcs.erase(charcs.begin()+diff);
    }
    return rank;

}
