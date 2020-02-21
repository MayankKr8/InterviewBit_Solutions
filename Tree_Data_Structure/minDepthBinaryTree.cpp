// Another variant of https://www.interviewbit.com/problems/min-depth-of-binary-tree/
// All you have to do is return the minimum of count, while travelling recurively.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::minDepth(TreeNode* A) {
    if(A==NULL) return 0;
    int ans=1;
    if(A->left==NULL && A->right==NULL) return ans;
    int lh =1,rh=1;
    if(A->left) lh = minDepth(A->left);
    else 
    {
        ans += minDepth(A->right);
        return ans;
    }
    if(A->right) rh = minDepth(A->right);
    else
    {
        ans += lh;
        return ans;
    }
    ans += min(rh,lh);
    //cout<<ans<<" "<<A->val<<endl;
    return ans;
}
