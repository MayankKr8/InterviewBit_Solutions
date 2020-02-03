// The property of the BST will help us devise a recursive approach.
// With help of two varied paced pointers we reach the midlle of the list,which serves a sroot of thge treea and all numbers to the right form the right child of the tree and the same for left.
// Recurisvely call for the left and right child.

/**
    * Definition for binary tree
    * struct TreeNode {
    *     int val;
    *     TreeNode *left;
    *     TreeNode *right;
    *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    * };
    */
/**
    * Definition for singly-linked list.
    * struct ListNode {
    *     int val;
    *     ListNode *next;
    *     ListNode(int x) : val(x), next(NULL) {}
    * };
    */
TreeNode* Solution::sortedListToBST(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    ListNode* slow = A;
    ListNode* fast = A;
    if(A->next==NULL)
    {
        TreeNode* ans = new TreeNode(A->val);
        return ans;
    }
    if(A->next->next==NULL)
    {
        TreeNode* ans = new TreeNode(A->next->val);
        ans->left = new TreeNode(A->val);
        return ans;
    }
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    TreeNode* ans = new TreeNode(slow->val);
    ListNode* itr = A;
    while(itr->next!=slow) itr = itr->next;
    itr->next =NULL;
    ans->left = sortedListToBST(A);
    ans->right = sortedListToBST(slow->next);
    return ans;
    
}

