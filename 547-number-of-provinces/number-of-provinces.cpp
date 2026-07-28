class Solution {
public:
    void dfs(unordered_map<int,vector<int>>&adj,int u,vector<bool>&visited){
        visited[u]=true;

        for(int &v:adj[u]){
            if(!visited[v]){
                dfs(adj,v,visited);
    
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
         vector<bool>visited(n,false);
        unordered_map<int,vector<int>>adj;
        for(int u=0;u<n;u++){
            for(int v=0;v<n;v++){
               if(isConnected[u][v]==1){
                    adj[u].push_back(v);
                }
            }
        }
        int count=0;

        for(int i=0;i<n;i++){

            if(!visited[i]){

                count++;      // new province found

                dfs(adj,i,visited);
            }
        }

        return count;
       
    }
};