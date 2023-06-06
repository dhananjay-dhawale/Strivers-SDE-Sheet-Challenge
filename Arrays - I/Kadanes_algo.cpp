class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        long long local_sum = arr[0], global_sum = arr[0];
        for(int i = 1; i < n; i++) {
            local_sum  = max(1LL * arr[i], local_sum + arr[i]);
            global_sum = max(global_sum, local_sum);
        }
        return global_sum;
    }
};
