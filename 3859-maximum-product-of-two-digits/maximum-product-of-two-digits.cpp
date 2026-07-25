class Solution {
public:
    int maxProduct(int n) {
        vector<int>result;
        while(n>0){
          result.push_back(n%10);
        n=n/10;
        }
        int ans=0;
        
      

        for(int i=0;i<result.size();i++){
            for(int j=i+1;j<result.size();j++){
                ans=max(ans,result[i]*result[j]);
            }
        }
        return ans;
    }
};