class Solution {
public:
    bool isAnagram(string s, string t) {
        vector < int > stringS(26,0),stringT(26,0);
        for (char c: s) stringS [  c - 'a'] ++;
        for (char c: t) stringT [ c -'a'] ++;
        return stringS == stringT;
    }
};