class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    if (strs.size() < 2) {
      vector<vector<string>> vv;
      vv.push_back(strs);
      return vv;
    }
    map<string, vector<string>> mapp;
    for (auto &s : strs) {
      string sorted = s;
      sort(sorted.begin(), sorted.end());
      if (mapp.find(sorted) == mapp.end()) {
        mapp.insert({sorted, vector<string>{s}});
      } else {
        auto it = find(mapp[sorted].begin(), mapp[sorted].end(), s);
        mapp[sorted].push_back(s);
      }
    }
    vector<vector<string>> ga;
    for (const auto &pair : mapp) {
      ga.push_back(pair.second);
    }
    return ga;
  }
}
