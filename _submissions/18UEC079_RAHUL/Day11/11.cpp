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

      return A1->val==A2->val && s(A1->left,A2->left) && s(A1->right,A2->right);
}
int Solution::isSameTree(TreeNode* A, TreeNode* B) {

    return s(A,B);
}
