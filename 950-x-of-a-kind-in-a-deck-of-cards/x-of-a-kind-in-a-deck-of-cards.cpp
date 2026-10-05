class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mpp;

        for (int card : deck) {
            mpp[card]++;
        }

      
        int x = 0;
        for (auto &pair : mpp) {
            x = gcd(x, pair.second);
        }

        return x >= 2;
    }
};