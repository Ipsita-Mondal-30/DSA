class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int i=0,mul=1,m=INT_MIN;
        for(i=0;i<n;i++){
            mul=mul*nums[i];
            m=max(m,mul);
            if(mul==0)mul=1;

        }
        mul=1;
        for(i=n-1;i>=0;i--){
              mul=mul*nums[i];
                  m=max(m,mul);
            if(mul==0)mul=1;
        }
        return m;
    }
};