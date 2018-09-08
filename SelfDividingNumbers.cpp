class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left; i<=right; i++)    {
            int n = i;
            int rem;
            while(n>0)  {
                rem = n % 10;
                if(rem != 0 && i%rem == 0)  {
                    n /= 10;
                } else  {
                    break;
                }
            }
            if(!n)  {
                res.push_back(i);
            }
        }
        return res;
    }
};
