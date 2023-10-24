class Solution {
public:
    int maxArea(const vector<int>& nums) {
        int m = - 1;
        int l = 0,r = nums.size() -1;
        while (l < r){
            m = max(m,min(nums[l],nums[r]) * (r -l));
            if (nums[l] < nums[r]) l ++;
            else r--;
        }
        return m;
    }
};

//for this problem instead of looking for the another best 
//we forget about the one that currently is providing less
