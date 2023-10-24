class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>&input) {
       unordered_map<string,vector<string>> anagrams;
       vector < vector < string > > vs;
       for (string s: input){
           auto t = s;
           sort(s.begin(),s.end());
            anagrams[s].emplace_back(t);
       }
       for (auto it = anagrams.begin(); it != anagrams.end(); it ++){
           vs.push_back(it->second);
       }
       return vs;
    }
};