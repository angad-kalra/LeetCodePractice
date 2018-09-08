class Solution {
    public int numJewelsInStones(String J, String S) {
        int total = 0;
        if (S.length() == 0 || J.length() == 0)
        {
            return 0;
        }
        for (int i=0;i<S.length();i++)  {
            if(J.indexOf(S.charAt(i)) >= 0)  {
                    total++;
            }
        }
        return total;
    }
}
