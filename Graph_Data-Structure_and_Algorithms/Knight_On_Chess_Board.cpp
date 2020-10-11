int dijkstra(int n,int m,int x1,int y1,int x2,int y2)
{
    vector<vector<int> > ans(n,vector<int>(m,1e8));
    ans[x1][y1]=0;
    priority_queue< pair<int,pair<int,int> >,vector< pair<int,pair<int,int> > >,greater< pair<int,pair<int,int> > > > q;
    q.push(make_pair(0,make_pair(x1,y1)));
    while(!q.empty())
    {
        pair<int,pair<int,int> > z=q.top();
        q.pop();
        if(z.first>ans[z.second.first][z.second.second]) continue;
        else
        {
            for(int i=-2;i<=2;i++)
            {
                if(i==0) continue;
                int j=3-abs(i);
                //cout<<i<<" "<<j<<endl;
                if(z.second.first+i>=0 && z.second.first+i<n && z.second.second+j>=0 && z.second.second+j<m)
                {
                    if(ans[z.second.first][z.second.second]+1<ans[z.second.first+i][z.second.second+j])
                    {
                        ans[z.second.first+i][z.second.second+j]=ans[z.second.first][z.second.second]+1;
                        q.push(make_pair(ans[z.second.first+i][z.second.second+j],make_pair(z.second.first+i,z.second.second+j)));
                    }
                }
                j=-j;
                if(z.second.first+i>=0 && z.second.first+i<n && z.second.second+j>=0 && z.second.second+j<m)
                {
                    if(ans[z.second.first][z.second.second]+1<ans[z.second.first+i][z.second.second+j])
                    {
                        ans[z.second.first+i][z.second.second+j]=ans[z.second.first][z.second.second]+1;
                        q.push(make_pair(ans[z.second.first+i][z.second.second+j],make_pair(z.second.first+i,z.second.second+j)));
                    }
                }
            }
        }
    }
    if(ans[x2][y2]>=1e8) return -1;
    return ans[x2][y2];
}
int Solution::knight(int A, int B, int C, int D, int E, int F) {
    int n=A,m=B;
    int x1=C,y1=D,x2=E,y2=F;
    x1--;
    y1--;
    x2--;
    y2--;
    return dijkstra(n,m,x1,y1,x2,y2);
}
