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
        ListNode* p1 = l1;
        ListNode* p2 = l2;
        ListNode* temp;
        int carry = 0, sum = 0;
        
        ListNode* ans = new ListNode(0);
        temp = ans;

        while(p1 || p2){

            if(p1 && p2){
            sum = p1->val + p2->val;
            temp->next = new ListNode((sum+carry)%10);
            temp = temp->next;
            if((sum+carry) > 9) carry = 1;
            else carry = 0;
            p1 = p1->next;
            p2 = p2->next;
            }

           else if(!p1){
                sum = p2->val;
                temp->next = new ListNode((sum+carry)%10);
                temp = temp->next;
                if((sum+carry) > 9) carry = 1;
                else carry = 0;
                p2 = p2->next;
            }

            else{
                sum = p1->val;
                temp->next = new ListNode((sum+carry)%10);
                temp = temp->next;
                if((sum+carry) > 9) carry = 1;
                else carry = 0;
                p1 = p1->next;
            }
        }
        if(carry) temp->next = new ListNode(carry);
        return ans->next;
    }
};