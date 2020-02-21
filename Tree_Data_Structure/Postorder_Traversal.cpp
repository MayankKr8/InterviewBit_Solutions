void(TreeNode* A,vector<int> &B)
{
    if(A->left) help(A->left,B);
    if(A->right) help(A->right,B);
    B.push_back(A->val);
}
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> ans;
    if(A==NULL) return ans;
    else help(A,ans);
    return ans;
}
