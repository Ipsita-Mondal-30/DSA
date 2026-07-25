class Solution {
public:
    int maxProduct(int n) {
        int largest=-1;
        int seclargest=-1;
        
        while(n>0){
        int digit=n%10;
          if(digit>=largest){
            seclargest=largest;
            largest=digit;
          }
          else if(digit>seclargest){
            seclargest=digit;
          }
            n/=10;
    }
        return largest*seclargest;
    }
};