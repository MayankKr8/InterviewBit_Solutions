// We use stacks or any similar data structure to maintain the nodes
// One to store the current layer nodes to process
// One to store the children of all processed nodes, which wil serve as the potential nodes in next iteration
// The code is pretty much based on Depth first Search

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>> ans;
    if(A==NULL) return ans;
    vector<TreeNode*> list;
    vector<int> dummy;
    dummy.push_back(A->val);
    ans.push_back(dummy);
    dummy.clear();
    if(A->left)(list.push_back(A->left));
    if(A->right)(list.push_back(A->right));
    while(list.size()>0)
    {
        vector<TreeNode*> temp;
        for(int i=0;i<list.size();i++)
        {
            dummy.push_back(list[i]->val);
            if(list[i]->left)(temp.push_back(list[i]->left));
            if(list[i]->right)(temp.push_back(list[i]->right));
        }
        ans.push_back(dummy);
        dummy.clear();
        list = temp;
    }
    int i=1;
    while(i<ans.size())
    {
        reverse(ans[i].begin(),ans[i].end());
        i+=2;
    }
    return ans;
}
