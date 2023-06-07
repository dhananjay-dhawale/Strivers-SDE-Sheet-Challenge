class Solution {
public:
    void sortColors(vector<int>& A) {
        int n = A.size();
        int l = 0, r = n - 1;
        for(int i = 0; i < n; i++) {
            while(l < n && A[l] == 0) {
                l += 1;
            }
            while(r >= 0 && A[r] == 2) {
                r -= 1;
            }
            if(A[i] == 0) {
                if(i > l) {
                    swap(A[i], A[l]);
                    i -= 1;
                }
            }
            else if(A[i] == 2) {
                if(i < r) {
                    swap(A[i], A[r]);
                    i -= 1;
                }
            }
        }
    }
};
