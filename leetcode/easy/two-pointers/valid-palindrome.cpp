class Solution {
public:
    bool isPalindrome(const string &s) {
        string t("");
        for (const char &c: s){
            if ( (c >= 'a' and  c <= 'z') or (c >= '0' and c <= '9')) t += c;
            if ( c >= 'A' and c<= 'Z') t += ( c + 32);
        }
        for (int i = 0, j = t.size() -1; i < j; i ++, j --)
            if (t[i] != t[j])
                return false;
        return true;
    }
};