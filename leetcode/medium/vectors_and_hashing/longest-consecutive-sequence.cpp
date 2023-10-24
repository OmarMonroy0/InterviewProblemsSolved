class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set < int > unique_numbers(nums.begin(),nums.end());
        int longest = 0;

        for ( auto &n: unique_numbers){
            if( unique_numbers.count(n - 1) == 0){
                int counter = 1;
                while ( unique_numbers.count(n + counter))
                    counter ++;
                longest = max(longest,counter);
            }
        }
       return longest;   
    }
};