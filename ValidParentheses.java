class Solution {
    public boolean isValid(String s) {
        Stack st = new Stack();
        char temp;
        for(int i=0;i<s.length();i++)
        {
            char ch = s.charAt(i);
            if(ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else if(st.empty())
            {
                return false;
            }
            else if((char)st.peek() == '(' && ch == ')')
            {
                temp = (char)st.pop();
            }
            else if((char)st.peek() == '{' && ch == '}')
            {
                temp = (char)st.pop();
            }
            else if((char)st.peek() == '[' && ch == ']')
            {
                temp = (char)st.pop();
            }
            else
                return false;
        }
        if(st.empty())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
