class Solution {
public:
    int lengthOfLongestSubstring(const string &s) {
        int max_length = 0;
        int current = 0;
        unordered_set<char> elements;
        for (int i = 0,j = 0; j < s.size();){
            //if it is in the map
            if (elements.count(s[j])){
                while (elements.count(s[j])){
                    elements.erase(s[i]);
                    i ++;
                }
                elements.insert(s[j]);
            }
            else {
                elements.insert(s[j]);
            }
            j ++;
            max_length  = max(max_length,j - i );
        }
        return max_length;

    }
};
//so for this problem the main trick can be checked in the next example
//  "abcbabcbb"
//      ^
//When we get the pointer in the second "b" we need to delete from the set
// not only the b but all the elements before "b" have to be deleted
//and the reason for that is because we are looking for SUBSTRING
