class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector < int > preffix(nums.size(),0);
       vector < int > suffix(nums.size(),0),result(nums.size(),0);
       preffix [ 0 ] = nums [ 0 ];
       suffix [ nums.size() - 1] = nums [ nums.size() - 1];
       for (int i = 1; i < nums.size(); i++)
        preffix [ i ] = nums [ i ] * preffix [ i - 1];
        for (int i = nums.size() -2; i >= 0; i--)
            suffix [ i ] = nums[ i ] * suffix [ i + 1];
        
        for (int i = 1;  i < nums.size() -1; i ++)
            result [ i ] = preffix[ i - 1] * suffix [ i + 1];
        result [ 0 ] = suffix[ 1 ];
        result [ nums.size() - 1 ] = preffix[nums.size() - 2];
        return result;

    }
};