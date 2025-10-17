class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> umap;
        for (int& n : nums) {
            if (umap.find(n) != umap.end()) {
                umap[n]++;
            } else {
                umap[n] = 1;
            }
        }
        vector<pair<int, int>> freq(umap.begin(), umap.end());
        sort(freq.begin(), freq.end(), [](const auto& a, const auto& b){
            return a.second > b.second;
        });
        
        vector<int> ans;
        for (auto& pair : freq) {
            ans.push_back(pair.first);
        }
        ans.resize(k);
        return ans;
    }
};
