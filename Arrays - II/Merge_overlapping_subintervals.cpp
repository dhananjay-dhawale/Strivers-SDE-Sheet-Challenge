class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& I) {
        int n = I.size();
        sort(I.begin(), I.end());
        vector <vector <int>> v;
        v.push_back(I[0]);
        for(int i = 1; i < n; i++) {
            if(I[i][0] <= v.back()[1]) {
                v.back()[1] = max(v.back()[1], I[i][1]);
            }
            else {
                v.push_back(I[i]);
            }
        }
        return v;
    }
};
