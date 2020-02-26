//The code is simply recursive;
//2 trees T1 and T2 are symmetric if
// * value of T1’s root is same as T2’s root
// * T1’s left and T2’s right are symmetric.
// * T2’s left and T1’s right are symmetric.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int help(vector<int> dummy)
{
    stack<int> stk;
    for(int i=0;i<dummy.size()/2;i++) stk.push(dummy[i]);
    for(int i = dummy.size()/2;i<dummy.size();i++)
    {
        if(stk.top()==dummy[i]) stk.pop();
        else return 0;
    }
    return 1;
}
int Solution::isSymmetric(TreeNode* A) {
    if(A==NULL) return 1;
    vector<TreeNode*> list;
    vector<int> dummy;
    if(A->left) list.push_back(A->left);
    if(A->right) list.push_back(A->right);
    while(list.size()>0)
    {
        for(int i =0;i<list.size();i++) dummy.push_back(list[i]->val);
        if(!(help(dummy))) return 0;
        dummy.clear();
        vector<TreeNode*> temp;
        for(int i=0;i<list.size();i++)
        {
            if(list[i]->left) temp.push_back(list[i]->left);
            if(list[i]->right) temp.push_back(list[i]->right);
        }
        list = temp;
    }
    return 1;
}
