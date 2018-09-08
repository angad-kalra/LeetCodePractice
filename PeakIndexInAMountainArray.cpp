class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        for(int i = 1; i<A.size(); i++)    {
            if(A.at(i-1)<A.at(i) && A.at(i)>A.at(i+1))  {
                return i;
            }
        }
    }
};
