// The code works on the simple logic of recursion. We use a helper function to determne the height of a tree.
// See if a node is Balanced or not using the helper function to calculate the height of its left subchils and right subchild.
// Call recursive for left child and right child.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int help(TreeNode* A)
{
    int lh=0,rh=0;
    if(A->left) lh = help(A->left);
    if(A->right) rh = help(A->right);
    int height = max(rh,lh);
    return height+1;
}
int Solution::isBalanced(TreeNode* A) {
    if(A==NULL) return 1;
    int l_h=0,r_h=0;
    if(A->left) l_h  = help(A->left);
    if(A->right) r_h = help(A->right);
    //cout<<r_h<<" "<<l_h<<endl;
    //cout<<isBalanced(A->left)<<endl;
    if(abs(l_h-r_h)>1) return 0;
    else return (1 && isBalanced(A->left) && isBalanced(A->right)) ;
 }
