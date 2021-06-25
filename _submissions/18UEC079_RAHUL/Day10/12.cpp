/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool s(TreeNode* A1,TreeNode* A2)
{
      if(!A1 && !A2)
      return true;
      if(!A1 || !A2)
      return false;

      return A1->val==A2->val && s(A1->left,A2->right) && s(A1->right,A2->left);
}

int Solution::isSymmetric(TreeNode* A) {
    if(!A)
    return 1;
    return s(A,A);
}
