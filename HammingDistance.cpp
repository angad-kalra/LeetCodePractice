class Solution {
public:
    int hammingDistance(int x, int y) {
        unsigned int z = x ^ y;
        int diff = 0;
        while(z)    {
            if(z & 1)   {
                diff++;
            }
            z = (z>>1);
        }
        return diff;
    }
};
