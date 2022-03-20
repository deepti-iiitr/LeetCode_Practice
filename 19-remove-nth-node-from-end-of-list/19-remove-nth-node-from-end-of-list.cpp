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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size_of_list=0;
        ListNode *t=head;
        while(t){
           size_of_list++;
            t=t->next;
        }
        int pos=size_of_list-n+1;
        t=head;
        if(pos==1){
            head=head->next;
            t->next=NULL;
            return head;
        }
        ListNode *prev, *curr=head;
        int i=0;
        while(i<pos-1){
            prev=curr;
            curr=curr->next;
            i++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete(curr);
        return head;
    }
};