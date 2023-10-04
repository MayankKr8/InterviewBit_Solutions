vector<vector<string> > ANS;
void solve(int c,vector<vector<int> >&prev,map<string,int>&m,map<int,string>&ulta,vector<string>&tmp,int st)
{
    if(c==st)
    {
        ANS.push_back(tmp);
        return;
    }
    else
    {
        for(int i=0;i<prev[c].size();i++)
        {
            tmp.push_back(ulta[prev[c][i]]);
            solve(prev[c][i],prev,m,ulta,tmp,st);
            tmp.pop_back();
        }
        return;
    }
}
void dijkstra(map<string,int>&m,map<int,string>&ulta,int st,int en)
{
    vector<int> ans(100005,1000000);
    vector<vector<int> > prev(100005);
    ans[st]=0;
    //prev[st]=0;
    //cout<<m.size()+1<<endl;
    //cout<<st<<" "<<m["ab"]<<endl;
    //cout<<ans[m["ab"]]<<endl;
    priority_queue< pair<int,int>,vector< pair<int,int> >,greater< pair<int,int> > > q;
    q.push(make_pair(0,st));
    while(!q.empty())
    {
        pair<int,int> z=q.top();
        q.pop();
        //cout<<ulta[z.second]<<endl;
        if(z.first>ans[z.second]) continue;
        else
        {
            string x=ulta[z.second];
            string y=x;
            for(int i=0;i<x.size();i++)
            {
                for(int j=0;j<26;j++)
                {
                    x[i]=j+'a';
                    //cout<<x<<endl;
                    if(m.find(x)!=m.end() && x[i]!=y[i])
                    {
                        //cout<<x<<endl;
                        //cout<<ans[z.second]+1<<" "<<ans[m[x]]<<" "<<m[x]<<endl;
                        if(ans[z.second]+1<ans[m[x]])
                        {
                            ans[m[x]]=ans[z.second]+1;
                            prev[m[x]].clear();
                            prev[m[x]].push_back(z.second);
                            //cout<<x<<endl;
                            q.push(make_pair(ans[m[x]],m[x]));
                        }
                        else if(ans[z.second]+1==ans[m[x]])
                        {
                            prev[m[x]].push_back(z.second);
                        }
                    }
                }
                x[i]=y[i];
            }
        }
    }
    
    vector<string> tmp;
    tmp.push_back(ulta[en]);
    solve(en,prev,m,ulta,tmp,st);
}
vector<vector<string> > Solution::findLadders(string start, string end, vector<string> &dict) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    map<string,int> m;
    map<int,string> ulta;
    int cnt=0;
    m[start]=cnt;
    ulta[cnt]=start;
    cnt++;
    m[end]=cnt;
    ulta[cnt]=end;
    cnt++;
    for(int i=0;i<dict.size();i++)
    {
        m[dict[i]]=cnt;
        ulta[cnt]=dict[i];
        cnt++;
    }
    ANS.clear();
    int st=m[start];
    int en=m[end];
    dijkstra(m,ulta,st,en);
    for(int i=0;i<ANS.size();i++)
    {
        reverse(ANS[i].begin(),ANS[i].end());
    }
    sort(ANS.begin(),ANS.end());
    return ANS;
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
