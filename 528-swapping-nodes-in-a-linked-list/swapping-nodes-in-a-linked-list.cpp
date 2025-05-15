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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* prev=head;
        ListNode* forward= head;
        int num=0;
        for(ListNode* ptr= head; ptr!=NULL; ptr=ptr->next){
            num++;
        }
        for(int i=1; i<k; i++){
            prev=prev->next;
        }
        for(int i=1; i<=num-k; i++){
            forward=forward->next;
        }
        int x= prev->val;
        prev->val=forward->val;
        forward->val=x;
        return head;
    }
};