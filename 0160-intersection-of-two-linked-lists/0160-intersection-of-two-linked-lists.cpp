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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) { 

        int lenA = 0;
        int lenB = 0;

        ListNode* tempA = headA;
        ListNode* tempB = headB;

        while(tempA->next){
          lenA++;
          tempA = tempA->next;
        }

        while(tempB->next){
          lenB++;
          tempB = tempB->next;
        }

        tempA = headA;
        tempB = headB;

        if(lenA > lenB) {
            int skipA = lenA - lenB;
            // tempA = headA;    // suppose if condition somehow false, then  we can not reassign tempA to the headA
            while(skipA--){
                tempA = tempA->next;
            }
        }

        else{
            int skipB = lenB - lenA;
            // tempB = headB;   // same like above , so reassigned before if condition
            while(skipB--){
                tempB = tempB->next;
            }
        }

        while(tempA && tempB){
            if(tempA == tempB) return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }

        return NULL;

    }
};

        // ListNode *pA = headA;
        // ListNode *pB = headB;
        // while (pA != pB) {     
        //     // pA = pA == nullptr ? headB : pA->next;
        //     if(pA == NULL){
        //         pA = headB;
        //     }
        //     else{
        //         pA = pA->next;
        //     }
        //     pB = pB == nullptr ? headA : pB->next;
        // }
        // return pA;
//     }
// };