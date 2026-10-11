class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int sum=target-nums[i];
            if(mpp.contains(sum)){
                return{mpp[sum],i};
            }
            mpp[nums[i]]=i;
        }
        return {0,0};
    }
};