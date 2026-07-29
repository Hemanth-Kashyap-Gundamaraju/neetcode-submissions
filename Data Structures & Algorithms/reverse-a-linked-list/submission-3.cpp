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
        ListNode * trv1=head;
        ListNode *prev=NULL;
        while(trv1){
            ListNode *temp=trv1->next;
            trv1->next=prev;
            prev=trv1;
            trv1=temp;
            
        }
        return prev;
        // while(!trv1){

        // }
    }
};
