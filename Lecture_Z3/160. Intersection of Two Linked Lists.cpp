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
        ListNode* List1 = headA;
        ListNode* List2 = headB;
        ListNode* List11 = headA;
        ListNode* List22 = headB;
        int adder = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        while(List1 != NULL){
            cnt1++;
            List1 = List1->next;
        }
        while(List2 != NULL){
            cnt2++;
            List2 = List2->next;
        }
        if(cnt1 > cnt2){
            adder = cnt1-cnt2;
            while(adder != 0){
                adder--;
                List11=List11->next;
            }
        }
        else{
            adder = cnt2-cnt1;
            while(adder != 0){
                adder--;
                List22=List22->next;
            }
        }
        while(List11 != List22){
            List11=List11->next;
            List22=List22->next;
        }
        return List11;
    }
};