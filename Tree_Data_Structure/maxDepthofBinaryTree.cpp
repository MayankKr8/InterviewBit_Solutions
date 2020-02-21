// There can not be an easier recursion question,
// All you have to do is to iterate from root to leaf nodes, while maintaining a count of levels
// The max of all counts is the ans.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if(A==NULL) return 0;
    int ans = 1;
    int lh=0,rh=0;
    if(A->left) lh = maxDepth(A->left);
    if(A->right) rh = maxDepth(A->right);
    ans += max(rh,lh);
    return ans;
}
