class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2)  {
            return 0;
        }
        bool A[n+1];
        for(int i=2;i<=n;i++)   {
            A[i] = true;
        }
        for(int i=2; i<=pow(n,0.5);i++) {
            if(A[i] == true)    {
                for(int j = pow(i,2);j<=n;j+=i) {
                    A[j] = false;
                }
            }
        }
        int count = 0;
        for(int i=2;i<n;i++)   {
            if(A[i] == true)    {
                count++;
            }
        }
        return count;
    }
};
