

    /**
     * Definition for binary tree
     * struct TreeNode {
     *     int val;
     *     TreeNode *left;
     *     TreeNode *right;
     *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     * };
     */
    void help(TreeNode* A,vector<int> &B)
    {
        B.push_back(A->val);
        if(A->left) help(A->left,B);
        if(A->right) help(A->right,B);
    }
    vector<int> Solution::preorderTraversal(TreeNode* A) {
        vector<int> ans;
        if(A==NULL) return ans;
        else help(A,ans);
        return ans;
    }

