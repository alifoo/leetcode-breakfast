class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    vector<int> ans;
    unordered_map<int, int> hash_table;
    for (int i = 0; i < nums.size(); i++) {
      int second_integer = target - nums.at(i);

      if (hash_table.find(second_integer) != hash_table.end()) {
        ans.push_back(i);
        ans.push_back(hash_table.find(second_integer)->second);
        return ans;
      } else {
        hash_table[nums[i]] = i;
      }
    }

    return ans;
  }
};
