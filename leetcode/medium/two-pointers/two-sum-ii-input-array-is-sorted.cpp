class Solution {
public:
    vector<int> twoSum(const vector<int>& numbers, int target) {
        
        for (int i = 0; i < numbers.size(); i++){
            int missing = target - numbers[i];
            auto b = binary_search(numbers.begin() + i + 1,numbers.end(),missing);
            if ( b ){
                for (int  j = i + 1;  j < numbers.size(); j++)
                    if (numbers[j] == missing)
                        return {i+1,j+1};
            }
        }
        assert(0);
    }
};
