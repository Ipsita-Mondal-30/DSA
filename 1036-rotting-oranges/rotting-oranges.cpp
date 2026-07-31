class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();//this give the number of rows
        int m=grid[0].size();//this give the number of column
        //{{i,j},time}
        queue<pair<pair<int,int>,int>>que;
        int visit[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    que.push({{i,j},0});
                    visit[i][j]=2;
                }
                else{
                    visit[i][j]=0;
                }
            }
        }
        int time=0;

        while(!que.empty()){
            int numrow[4]={-1,0,+1,0};
             int numcols[4]={0,1,0,-1};
            int r=que.front().first.first;
            int c=que.front().first.second;
            int tm=que.front().second;
              time=max(time,tm);
            que.pop();

            for(int i=0;i<4;i++){
                int nrow=r+numrow[i];
                int ncols=c+numcols[i];
                if(nrow>=0&&nrow<n && ncols>=0 && ncols<m &&
                visit[nrow][ncols]!=2&& grid[nrow][ncols]==1){
                    que.push({{nrow,ncols},time+1});
                    visit[nrow][ncols]=2;
                }
            }
        }

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(visit[i][j]!=2&& grid[i][j]==1){
                    return -1;
                }
            }
        }
       return time;
    }
};