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
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */



// map<int,vector<int>>m;
//  void solvetemp(TreeNode* A,int x)
//  {
//      if(!A)
//      return;
     
//      m[x].push_back(A->val);
//      if(A->left!=NULL)
//      solvetemp(A->left,x-1);
//       if(A->right!=NULL)
//      solvetemp(A->right,x+1);
//  }
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
 //     ORDER CANT BE KEPT VERTICALLY in correct manner BY THIS CODE;;;;;;;;;;;;;;  
//  solvetemp(A,0);
//     vector<int>ans;
//     vector<vector<int> >res;
  
    
//       for(auto it: m)
//          res.push_back(it.second);
//     return res;
    
      queue<pair<int, TreeNode *> > q;    // <horizontal position wrt root, TreeNode *>
    vector<vector<int> > res;
    map<int, vector<int> > umap;
    if(not A)   return res;
    q.push({0, A});
    while(not q.empty()) {
        int len = q.size();
        for(int i=0; i<len; i++) {
            pair<int, TreeNode *> temp = q.front();
            q.pop();
            umap[temp.first].push_back(temp.second->val);
            if(temp.second->left) 
                q.push({temp.first - 1, temp.second->left});
            if(temp.second->right) 
                q.push({temp.first + 1, temp.second->right});
        }
    }
    for(auto it: umap)
        res.push_back(it.second);
    return res;
}
