// The solution is very similar to the question https://www.interviewbit.com/problems/path-sum/
// However this time we need to manintain all paths, instead of just a truth value.
// We do this by writing a helper function, which maintains a dummy array to store all the values encountere so far.
// If the sum of values in dummy equals the required value, it is pushed to vector of vectors "ans".

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void help(TreeNode* A, int B, vector<int> &dummy, vector<vector<int>> &ans)
{
    dummy.push_back(A->val);
    if(!(A->left || A->right) && A->val==B)
    {
        ans.push_back(dummy);
        dummy.pop_back();
    }
    else
    {
        if(!(A->left || A->right)) 
        {
            dummy.pop_back();
            return;
        }
        B -= A->val;
        if(A->left) help(A->left,B,dummy,ans);
        if(A->right) help(A->right,B,dummy,ans);
        dummy.pop_back();
    }
    
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> ans;
    vector<int> dummy;
    help(A,B,dummy,ans);
    //sort(ans.begin(),ans.end());
    return ans;
}
