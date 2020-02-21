// Classic example of recursion.
// Doesn't need any explainantion.

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
    if(A->left) help(A->left,B);
    B.push_back(A->val);
    if(A->right) help(A->right,B);
}
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> ans;
    if(A==NULL) return ans;
    help(A,ans);
    return ans;
}
