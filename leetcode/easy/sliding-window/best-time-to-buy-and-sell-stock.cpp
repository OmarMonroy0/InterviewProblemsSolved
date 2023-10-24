class Solution {
public:
    int maxProfit(const vector<int>& values) {
        int m  = values[0];
        int res = 0;
        for (int i  = 1; i < values.size();  i++){
            if (values[i] < m) m = values[i];
            else res = max(res,values[i] - m);
        }     
        return res; 
    }
};

