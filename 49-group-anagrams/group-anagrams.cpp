class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
        vector<vector<string>> answer;

        for (auto word : strs) {
            string key = word;
            sort(key.begin(), key.end());

            mpp[key].push_back(word);
        }

        for (auto it : mpp) {
            answer.push_back(it.second);
        }

        return answer;
    }
};

