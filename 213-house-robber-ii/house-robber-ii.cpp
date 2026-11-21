class Solution {
public:
    int solve(vector<int>&nums,int i,int n,vector<int>&dp){
        if(i>n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int take=nums[i]+solve(nums,i+2,n,dp);
        int skip=solve(nums,i+1,n,dp);
        return dp[i]=max(take,skip);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
       
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
         vector<int>dp1(n+1,-1);
        int take_0th_indx_home=solve(nums,0,n-2,dp1);
         vector<int>dp2(n+1,-1);
        int take_1th_indx_home=solve(nums,1,n-1,dp2);

        return max(take_0th_indx_home,take_1th_indx_home);

    }
};