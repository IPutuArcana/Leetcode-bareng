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

    
    // ListNode * l3 = new ListNode() ;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int sum;
        int n = 1;
        int digit;

    ListNode * curentNode = &l1;
    while(curentNode->next != NULL){
        
        digit = curentNode->val;
        sum += digit * n;
        n *= 10;

        curentNode = cerentNode->next;
        
    }


    }
    
