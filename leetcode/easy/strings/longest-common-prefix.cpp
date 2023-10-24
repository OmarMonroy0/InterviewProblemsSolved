
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minn = 201;
        string prefix = "";
        for (int i = 0 ; i < (int)strs.size(); i ++)
            minn  = min(minn,(int)strs[i].length());
        for (int i = 0; i < minn; i++){
            char character = strs[0][i];
            for (int j = 1; j < (int)strs.size(); j++){
                if ( strs[j][i] != character) return prefix;
                        //↑  to iterate through all vectors  
            }
            prefix += character;
        }
        return prefix;
    }
};