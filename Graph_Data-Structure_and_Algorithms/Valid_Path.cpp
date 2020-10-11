void dfs(int cx,int cy,int x,int y,int R,int N,vector<int>&X,vector<int>&Y,vector<vector<int> >&vis)
{
    if(cx<0 || cx>x || cy<0 || cy>y) return;
    else if(vis[cx][cy]==1) return;
    else
    {
        vis[cx][cy]=1;
        for(int i=-1;i<=1;i++)
        {
            for(int j=-1;j<=1;j++)
            {
                if(i==0 && j==0) continue;
                else
                {
                    bool chk=true;
                    int xx=cx+i,yy=cy+j;
                    for(int k=0;k<N;k++)
                    {
                        if((xx-X[k])*(xx-X[k])+(yy-Y[k])*(yy-Y[k])-R*R<=0)
                        {
                            chk=false;
                            break;
                        }
                    }
                    if(chk) dfs(cx+i,cy+j,x,y,R,N,X,Y,vis);
                }
            }
        }
    }
}
string Solution::solve(int A, int B, int C, int D, vector<int> &E, vector<int> &F) {
    int x=A,y=B,N=C,R=D;
    vector<vector<int> > vis(x+1,vector<int>(y+1,0));
    dfs(0,0,x,y,R,N,E,F,vis);
    if(vis[x][y]==1) return "YES";
    else return "NO";
}
