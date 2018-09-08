class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int r_size = A.size();
        int c_size = A[0].size();
        vector<vector<int>> B(c_size, vector<int>(r_size,0));
        for(int i = 0; i<r_size; i++) {
            for(int j = 0; j<c_size; j++)   {
                B[j][i] = A[i][j];
            }
        }
        return B;
    }
};
