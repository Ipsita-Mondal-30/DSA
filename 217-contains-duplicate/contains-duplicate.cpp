class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            if(mpp.count(nums[i])){
                return true;
            }
            mpp[nums[i]]++;
        }
        return false;
    }
};