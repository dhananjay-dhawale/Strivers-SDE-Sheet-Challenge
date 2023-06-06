class Solution {
public:
    void nextPermutation(vector<int>& P) {
        int j = 0, n = P.size();
        for(int i = n - 1; i > 0; i--) {
            if(P[i] > P[i - 1]) {
                j = i;
                break;
            }
        }
        if(j) {
            int i = j;
            while(i < n && P[i] > P[j - 1]) {
                i += 1;
            }
            i -= 1;
            swap(P[i], P[j - 1]);
        }
        int l = j, r = n - 1;
        while(l < r) {
            swap(P[l++], P[r--]);
        }
    }
};
