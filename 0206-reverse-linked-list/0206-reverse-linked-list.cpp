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
    ListNode* reverseList(ListNode* head) {
         ListNode* temp = head;
         int length_of_LinkedList = 0;

        while(temp){
            
            length_of_LinkedList++;
            temp = temp->next;
        }

        if(head == NULL){
           return NULL;
        }

        if(length_of_LinkedList == 1){
           return head;  
        }

        ListNode* prev = head;
        ListNode* curr = head->next; // prev->next
        while(curr->next){
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        head->next = NULL;
        curr->next = prev;
        head = curr;
        return head;
    }
};