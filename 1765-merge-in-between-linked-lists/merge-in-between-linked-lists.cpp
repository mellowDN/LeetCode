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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* prev= list1;
        ListNode* forward= list1;
        for(int i=1; i<a; i++){
            prev=prev->next;
        }
        for(int i=0; i<=b; i++){
            forward= forward->next;
        }
        prev->next=list2;
        ListNode* temp= list2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next= forward;
        return list1;
    }
};