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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp= head;
        while(temp->next!=NULL){
            int sum=0;
            ListNode* curr= temp->next;
            while(curr->val!=0){
                sum+=curr->val;
                curr=curr->next;
            }
            temp=temp->next;
            temp->val=sum;
            temp->next= curr->next;
            temp=curr;
        }
        return head->next;
    }
};