class Solution {
    public String reverseString(String s) {
        char[] c = s.toCharArray();
        for(int i=0;i<s.length() - i; i++)   {
            char temp = c[i];
            c[i] = c[s.length() - i - 1];
            c[s.length() - i - 1] = temp;
        }
        return String.valueOf(c);
    }
}
