/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//  vector<vector<int>>v(100000);
//  void s(TreeNode* A,int i)
//  {
//       if(!A)
//      return ; 
//      v[i].push_back(A->val);
//       s(A->right,i);
//     s(A->left,i+1);
//     return;
//  }
vector<int> Solution::solve(TreeNode* A) {
//   vector<int>ans;
//   if(!A)
//   return ans;
//   v[0].push_back(A->val);
//     s(A->right,0);
//     s(A->left,1);

//   for(int i=0;i<v.size();i++)
//   {
//       for(int j=0;j<v[i].size();j++)
//       ans.push_back(v[i][j]);
//   }
//   return ans;

   stack<pair<int, TreeNode *> > q;    // <horizontal position wrt root, TreeNode *>
    vector<int>  res;
    map<int, vector<int> > umap;
    if(not A)   {};
    q.push({0, A});
    while(not q.empty()) {
        int len = q.size();
        for(int i=0; i<len; i++) {
            pair<int, TreeNode *> temp = q.top();
            q.pop();
            umap[temp.first].push_back(temp.second->val);
            
             if(temp.second->right) 
                q.push({temp.first , temp.second->right});
             if(temp.second->left) 
                q.push({temp.first +1, temp.second->left});
            
           
           
        }
    }
    for(auto it: umap)
    {
          vector<int> temp=it.second;
        for(auto it1:temp)
        {
            res.push_back(it1);
        }
        
    }
       
    return res;
  
}
