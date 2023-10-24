class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
      unordered_map<int,int> repeated;
      for (int i:  nums) repeated [  i ] ++;
      for ( const auto &[key,value]: repeated) if (value > 1) return true;
      return false;
    }
};