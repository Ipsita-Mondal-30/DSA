class Solution {
public:
    void dfs(int node,vector<vector<int>>& isConnected,vector<bool>&visited){
        visited[node]=true;
        for(int neighbors=0;neighbors<isConnected.size();neighbors++){
            if(isConnected[node][neighbors]==1 && !visited[neighbors] ){
                visited[neighbors]=true;
                dfs(neighbors,isConnected,visited);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool>visited(n,false);
        int provinces=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                provinces++;
                dfs(i,isConnected,visited);
            }
        }
        return provinces;
    }
};