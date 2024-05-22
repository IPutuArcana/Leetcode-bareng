/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * r = new ListNode(); 
       ListNode * l3 = r;
       int p = 0;
       
       while(l1 != NULL || l2 != NULL)
       {
            int sum = p;
            if(l1 != NULL)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            p = sum / 10;
            l3->next = new ListNode(sum % 10);
            l3 = l3->next; 
       }

       if(p != NULL)
       {
            l3->next = new ListNode(p);
       }
       return r->next;
    }
};
