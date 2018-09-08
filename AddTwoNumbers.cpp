/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *sum_list = new ListNode(0);
        ListNode *temp_list = sum_list;
        while(l1 !=NULL || l2 != NULL)
        {
            
            int s = (l1 != NULL ? l1->val : 0) + (l2 != NULL ? l2->val : 0) + carry;
            carry = s / 10;
            s = s % 10;
            sum_list->next = new ListNode(s);
            if (l1 != NULL)
            {
                l1 = l1->next;
            }
            if (l2 != NULL)
            {
                l2 = l2->next;
            }
            sum_list = sum_list->next;
        }
        
        if(carry != 0)
        {
            sum_list->next = new ListNode(carry);
        }
        
        return temp_list->next;
    }
};
