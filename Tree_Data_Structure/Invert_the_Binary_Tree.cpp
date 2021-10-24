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
    for(int i= A.size()-1;i>=0;i--)
    {
        int j=0,k=i-1;
        while(j<k)
        {
            if(A[j]+A[k]>A[i]) 
            {
                ans  = (ans+(k-j)%m)%m;
                k--;
            }
            else j++;
        }
    }
    A->right = temp;
    if(A->left) A->left = invertTree(A->left);
    if(A->right) A->right = invertTree(A->right);
    return A;
}

