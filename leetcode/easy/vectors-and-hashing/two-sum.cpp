class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> freq;
      unordered_map<int,vector<int>> positions;

        for (int i  = 0; i <  nums.size(); i++){
            freq [ nums [ i ] ] ++;
            positions [ nums [ i ] ].emplace_back(i);
        }
    

        for (int i = 0; i < nums.size(); i ++){
            int missing = target  - nums[i];
            if (missing  == nums[i]){
                if (freq.count(nums[i]) and freq[nums[i]] > 1) return {positions[missing][0],positions[missing][1]};
            }else{
                if (freq.count(missing)){ cout << missing <<"  " << nums[i] << endl; return {i,positions[ missing][0]}; }
            }
        }
        assert(0);

    }
};