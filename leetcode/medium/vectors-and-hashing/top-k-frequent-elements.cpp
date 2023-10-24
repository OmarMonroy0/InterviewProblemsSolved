class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map <int,int> frequency_number;
       unordered_map <int, vector <int>> numbers_frequency;
        vector < int > frequencies (1e5+1,0),result;

        for (int i: nums) 
            frequency_number[  i ] ++;

        for (auto [number,frequency]: frequency_number){
            numbers_frequency [ frequency ].emplace_back ( number );
            frequencies [ frequency ] ++;
        }
        for (int  i = 1e5; i >= 0; i--){
            if ( frequencies[i]){
                    for(int j: numbers_frequency[ i ]){
                        if(k){
                            result.emplace_back (  j );
                            k --;
                        }
                        else return result;
                    }
            }
        }
        return result;
    }
};