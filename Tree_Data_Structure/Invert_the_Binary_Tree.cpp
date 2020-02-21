// Again a classic example of recurcion.
// Switch the right and left child of the node and call it recursively for the left and right child.

/**
    * Definition for binary tree
    * struct TreeNode {
    *     int val;
    *     TreeNode *left;
    *     TreeNode *right;
    *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    * };
    */
TreeNode* Solution::invertTree(TreeNode* A) {
    if(A==NULL || !(A->left || A->right)) return A;
    TreeNode* temp = A->left;
    A->left = A->right;
    A->right = temp;
    if(A->left) A->left = invertTree(A->left);
    if(A->right) A->right = invertTree(A->right);
    return A;
}

