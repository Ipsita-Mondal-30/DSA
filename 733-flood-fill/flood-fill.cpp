class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>& image,int color,int numrow[],int numcols[],int var){
        ans[row][col]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nrow=row+numrow[i];
            int ncols=col+numcols[i];
            if(nrow>=0&& nrow<n&& ncols>=0&& ncols<m&&
            image[nrow][ncols]==var && ans[nrow][ncols]!=color){
                dfs(nrow,ncols,ans,image,color,numrow,numcols,var);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int var=image[sr][sc];
        vector<vector<int>>ans=image;
        int numrow[4]={-1,0,+1,0};
        int numcols[4]={0,+1,0,-1};
        dfs(sr,sc,ans,image,color,numrow,numcols,var);
       
        return ans;

    }
};