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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* oddHead= head;
        ListNode* evenHead= head->next;
        ListNode* even= evenHead;
        if(oddHead->next==NULL){
            return head;
        }
        else if(evenHead->next==NULL){
            return head;
        }
        while(evenHead!=NULL && evenHead->next!=NULL){
            oddHead->next= evenHead->next;
            oddHead=evenHead->next;
            evenHead->next= oddHead->next;
            evenHead=  oddHead->next;
        }
        oddHead->next=even;
        return head;
    }
};