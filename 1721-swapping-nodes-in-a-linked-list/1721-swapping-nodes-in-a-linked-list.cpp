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
        ListNode* t=head, *p=head, *q=head;
        int i=0,j=0,len=0;
        while(t){
            t=t->next;
            len++;
        }
        t=head;
        while(i<k-1){
            p=p->next;
            i++;
        }
        cout<<p->val<<endl;
        while(j< len-k){
            q=q->next;
            j++;
        }
        cout<<q->val;
        int data=p->val;
        p->val=q->val;
        q->val=data;
        return head;
    }
};