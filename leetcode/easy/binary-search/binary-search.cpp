class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size()-1;

        while (i  <=  j){
            int h  = i + ( j - i) / 2;
            if (nums[h] == target) return h;
            if ( nums[ h ] > target) j = h-1;
            else i = h + 1; 
        }
        return -1;
    }
};