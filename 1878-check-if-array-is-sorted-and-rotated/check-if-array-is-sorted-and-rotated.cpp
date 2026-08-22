class Solution {
public:
    bool check(vector<int>& nums) {
        int breakpoint=-1;
        for(int i=0;i<nums.size()-1;i++){
        if(nums[i]>nums[i+1]){
            breakpoint=i;
            break;
        }
        }
        
        if(breakpoint==-1){
            return true;
        }

        rotate(nums.begin(),nums.begin()+breakpoint+1,nums.end());

        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
};