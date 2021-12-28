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
    ListNode* middleNode(ListNode* head) {
        int c,n=0;
        ListNode* t=head;
        while(t){
            n++;
            t=t->next;
        }
        t=head;
        c=n/2;
        while(c--)
            t=t->next;
        return t;
    }
};