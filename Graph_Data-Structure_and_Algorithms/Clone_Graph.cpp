/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
unordered_set<int> s;
unordered_set<int> S;
map<int,UndirectedGraphNode*> M;
void solve(UndirectedGraphNode* cur)
{
    //cout<<(ptr->label)<<" "<<(cur->label)<<endl;
    s.insert(cur->label);
    //UndirectedGraphNode* z=new UndirectedGraphNode(cur->label);
    //(ptr->neighbors).push_back(z);
    //(z->neighbors).push_back(ptr);
    for(int i=0;i<(cur->neighbors).size();i++)
    {
        //cout<<(((cur->neighbors)[i])->label)<<endl;
        if(s.find(((cur->neighbors)[i])->label)==s.end())
        {
            //UndirectedGraphNode* ptr=cur;
            UndirectedGraphNode* ptr=new UndirectedGraphNode(((cur->neighbors)[i])->label);
            (M[cur->label]->neighbors).push_back(ptr);
            M[((cur->neighbors)[i])->label]=ptr;
            solve((cur->neighbors)[i]);
        }
        else
        {
            (M[cur->label]->neighbors).push_back(M[((cur->neighbors)[i])->label]);
        }
    }
}
UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node) {
    if(node==NULL) return NULL;
    UndirectedGraphNode* ans=new UndirectedGraphNode(node->label);
    s.clear();
    S.clear();
    s.insert(node->label);
    M[node->label]=ans;
    for(int i=0;i<(node->neighbors).size();i++)
    {
        //(ans->neighbors).push_back()
        //cout<<(((node->neighbors)[i])->label)<<endl;
        
        if(s.find(((node->neighbors)[i])->label)==s.end())
        {
            UndirectedGraphNode* ptr=new UndirectedGraphNode(((node->neighbors)[i])->label);
            (ans->neighbors).push_back(ptr);
            M[((node->neighbors)[i])->label]=ptr;
            solve((node->neighbors)[i]);
        }
        else
        {
            (ans->neighbors).push_back(M[((node->neighbors)[i])->label]);
        }
    }
    return ans;

}
