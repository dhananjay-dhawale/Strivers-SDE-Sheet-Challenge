#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long>> M(n);
    for (int i = 0; i < n; i++) {
        M[i].resize(i + 1);
        M[i][0] = M[i][i] = 1;
        for (int j = 1; j < i; j++) {
            M[i][j] = M[i - 1][j - 1] + M[i - 1][j];
        }
    }    
    return M;
}

