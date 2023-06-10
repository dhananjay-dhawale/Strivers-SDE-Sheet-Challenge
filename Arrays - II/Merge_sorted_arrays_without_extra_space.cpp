class Solution {
public:
    void merge(vector<int>& A, int n, vector<int>& B, int m) {
        int i = n - 1, j = m - 1;
        for(int k = m + n - 1; k >= 0; k--) {
            if(i >= 0 && (j < 0 || A[i] >= B[j])) {
                A[k] = A[i--];
            }
            else {
                A[k] = B[j--];
            }
        }
    }
};
