#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &M)
{
	int n = M.size(), m = M[0].size();
	vector <int> r(n), c(m);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			if(!M[i][j]) {
				r[i] = 1;
				c[j] = 1;
			}
		} 
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
            if (r[i] || c[j]) {
				M[i][j] = 0;
            }
        }
    }
}
