//A simple BFS problem( you could use DFS as well)
//Traverse all neighbouring nodes, and repeat for all the nodes visited so far

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    vector<TreeNode*> chd;
    vector<vector<int>> ans;
vector<int> dummy;
        dummy.push_back(A->val);
        ans.push_back(dummy);
        dummy.clear();
        if(A->left) chd.push_back(A->left);
        if(A->right) chd.push_back(A->right);
    if(!A) return ans;
    else
    {
        vector<int> dummy;
        dummy.push_back(A->val);
        ans.push_back(dummy);
        dummy.clear();
        if(A->left) chd.push_back(A->left);
        if(A->right) chd.push_back(A->right);
        while(chd.size()>0)
        {
            vector<TreeNode*> temp;
            for(int i=0;i<chd.size();i++)
            {
                dummy.push_back(chd[i]->val);
                if(chd[i]->left) temp.push_back(chd[i]->left);
                if(chd[i]->right) temp.push_back(chd[i]->right);
            }
            ans.push_back(dummy);
            dummy.clear();
            chd = temp;
        }
        return ans;
    }
}
