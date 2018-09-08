class Solution {
    public int calPoints(String[] ops) {
        LinkedList<Integer> list = new LinkedList<>();
        int sum = 0;
        for(String s : ops)   {
            if(s.equals("C"))   {
                sum -= list.removeLast();
            }   else if(s.equals("D"))   {
                list.add(list.peekLast() * 2);
                sum += list.peekLast();
            }   else if(s.equals("+"))   {
                list.add(list.peekLast() + list.get(list.size() - 2));
                sum += list.peekLast();
            }   else    {
                list.add(Integer.parseInt(s));
                sum += list.peekLast();
            }
        }
        return sum;
    }
}
