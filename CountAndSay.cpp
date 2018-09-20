class Solution {
public:
    string countAndSay(int n) {
        if(n == 0)  {return "";}
        string s = "1";
        for(int i=1;i<n;i++)   {
            string res = "";
            for(int j=0; j<s.size(); j++)  {
                int count = 1;
                while(((j+1)<s.size()) && (s[j] == s[j+1]))  {
                    count++;
                    j++;
                }
                res += to_string(count) + s[j];
            }
            s = res;
        }
        return s;
    }
};
