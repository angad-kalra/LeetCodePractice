class Solution {
public:
    bool judgeCircle(string moves) {
        int ud=0,lr=0;
        for(auto c : moves) {
            if(c == 'U' || c == 'R')    {
                ud++;
                lr++;
            }
            else if(c == 'D' || c == 'L')   {
                ud--;
                lr--;
            }
        }
        return ((ud==0)&&(lr==0));
    }
};
