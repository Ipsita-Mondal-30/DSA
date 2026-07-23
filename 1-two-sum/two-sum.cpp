class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>mpp;

        for(int i=0;i<nums.size();i++){
            int val=target-nums[i];
            if(mpp.count(val)){
                return{mpp[val],i};
            }
            mpp[nums[i]]=i;
     

        }
    return{0,0};
    }
};
