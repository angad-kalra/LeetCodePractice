class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for(auto& row:A)   {
            reverse(row.begin(),row.end());
            for(auto& x:row)   {
                x^=1;
            }
        }
        return A;
    }
};
