// This can be tackled with recursion.
// We write a base condition check which returns true if we 
//are at a leaf, which has the value we are looking for.
// Else we remove the value of the node, and recursively check if 
//the right or left child has the updated value

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* A, int B) {
    //if(A->val>B) return 0;
    if(A->val==B && A->left==NULL && A->right==NULL) return 1;
    else B -= A->val;
    int lh =0,rh =0;
    if(A->left) lh = hasPathSum(A->left,B);
    if(A->right) rh = hasPathSum(A->right,B);
    return (rh||lh);
}
