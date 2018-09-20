class Solution {
public:
    int climbStairs(int n) {
        if(n == 2)  {
            return 2;
        }
        else if(n == 1) {
            return 1;
        }
        int last = 0;
        int first = 1;
        int second = 2;
        for(int i=3; i<=n;i++)   {
            last = first + second;
            first = second;
            second = last;
        }
        return last;
    }
};
