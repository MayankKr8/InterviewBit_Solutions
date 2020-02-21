// The question has to be solved with recursion.
// It's pretty simple and straight. Recursively compare nodes from root to leaf.
// You really need to start coding seriously, if you are reading this code instead of writing it youself in one attempt.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if(A==NULL && B==NULL) return 1;
    if(A->val!=B->val) return 0;
    int lh=1,rh=1;
    if(A->left && B->left || !(A->left || B->left))  lh = isSameTree(A->left,B->left);
    else return 0;
    if(A->right && B->right  || !(A->right || B->right)) rh = isSameTree(A->right,B->right);
    else return 0;
    return (1&&lh&&rh);
}
