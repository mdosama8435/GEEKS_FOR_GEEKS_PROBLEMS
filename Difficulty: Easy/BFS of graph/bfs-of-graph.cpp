class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
       int n=adj.size();
       vector<int> ans;
       vector<bool> vis(n,false);
       queue<int> q;
       
       q.push(0);
       vis[0]=true;
       
       while(!q.empty()){
           int node = q.front();
           q.pop();
           
           ans.push_back(node);
           
           for(int i=0 ; i<adj[node].size();i++){
               int neighnour = adj[node][i];
               
               if(!vis[neighnour]){
                   vis[neighnour] = true;
                   q.push(neighnour);
               }
           }
       }
       return ans;
    }
};