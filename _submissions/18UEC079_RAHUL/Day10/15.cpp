bool dfsrec(vector<vector<int> > &adj,int s,vector<bool>&vis,int parent)
{
    vis[s]=true;
    for(auto u:adj[s])
    {
        if(vis[u]==false)
         {
             if(dfsrec(adj,u,vis,s))
             {
                 return true;
             }
             
         }     
        else if(u!=parent)
        return true;
        
    }
    return false;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    
     vector<vector<int> > adj(A,vector<int> (0,0));
    int n = B.size();
    for(int i=0; i<n; i++){
          adj[B[i][0]-1].push_back(B[i][1]-1);
          adj[B[i][1]-1].push_back(B[i][0]-1);
    }
    vector<bool>vis(A,false);
     for(int i=0; i<A; i++){
         if(vis[i]==false)
         {
             if(dfsrec(adj,i,vis,-1))
             {
                 return true;
             }
         }
    }
    return false;
}
