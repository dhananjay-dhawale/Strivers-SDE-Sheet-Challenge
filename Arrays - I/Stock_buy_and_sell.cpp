class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX, ans = INT_MIN;
        for(auto i:prices){
            mn  = min(mn, i);
            ans = max(ans, i-mn);
        }
        return ans;
    }
};
