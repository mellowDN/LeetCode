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
 //#include <numeric>
class Solution {
public:
    /*int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b, a%b);
    }*/
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr= head;
        ListNode* forward= head->next;
        while(curr->next!=NULL){
            ListNode* temp= new ListNode(gcd(curr->val, forward->val));
            curr->next=temp;
            temp->next= forward;
            curr=forward;
            forward=forward->next;
        }
        return head;
    }
};