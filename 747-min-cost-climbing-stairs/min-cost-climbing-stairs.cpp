class Solution {
public:
    int solve(vector<int>& cost,int i,vector<int>&dp){
        int n=cost.size();//size of the cost
        //if i jump beyond the size
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int one=cost[i]+solve(cost,i+1,dp);//start with 1 step
        int two=cost[i]+solve(cost,i+2,dp);//start with two step
        return dp[i]=min(one, two); ;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1,-1);
       return min(solve(cost,0,dp),solve(cost,1,dp));
    }
};