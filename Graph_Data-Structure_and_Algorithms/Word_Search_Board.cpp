// A normal implementaion based problem where you have to to a normal BFS
// Add in smal optimisations to reduce some time.

vector<pair<int,int>> n_finder(int i, int j, vector<string> &A, char B)
{
    //cout<<i<<" "<<j<<endl;
    vector<pair<int,int>> ans;
    if(i>0 && A[i-1][j]==B) ans.push_back(make_pair(i-1,j));
    if(j<A[i].size()-1 && A[i][j+1]== B) ans.push_back(make_pair(i,j+1));
    if(j>0 && A[i][j-1]==B) ans.push_back(make_pair(i,j-1));
    if(i<A.size()-1 && A[i+1][j]==B) ans.push_back(make_pair(i+1,j));
    return ans;
}
bool ans(vector<pair<int,int>> &temp, string B, vector<string> &A, int i)
{
    if(i>=B.size()) return true;
    //cout<<i<<endl;
    //vector<pair<int,int>> tmp;
    for(int j=0;j<temp.size();j++)
    {
        vector<pair<int,int>> dummy = n_finder(temp[j].first,temp[j].second,A,B[i]);
        if(dummy.size()!=0 && ans(dummy,B,A,i+1)) return true;
    }
    return false;
}
int Solution::exist(vector<string> &A, string B) {
    if(B.size()==0) return 1;
    vector<pair<int,int>> temp;
    for(int i =0;i<A.size();i++)
    {
        for(int j=0;j<A[i].size();j++)
        {
            if(A[i][j]==B[0]) temp.push_back(make_pair(i,j));
        }
    }
    //cout<<"de"<<endl;
    if(ans(temp,B,A,1)) return 1;
    else return 0;
}
