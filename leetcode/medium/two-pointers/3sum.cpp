class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
      vector <  vector < int >> res;
      sort(nums.begin(),nums.end());

      for (int i  = 0; i< nums.size();  i ++){
          if (i > 0 and nums[i] == nums[i - 1]) continue;
          int target = -nums[ i ];
          int  l  = i + 1;
          int  r  = nums.size() - 1;
          while (l < r ){

              if (nums[l] + nums[r] == target){
                res.push_back({nums[i],nums[l],nums[r]});
                 l ++;
                 while ( l < r and nums[l] == nums[l-1]) l++; 
              }
              else if (nums[l] + nums[r] > target) r --;
              else l ++;
          }
      }
      return res;
    }
};

