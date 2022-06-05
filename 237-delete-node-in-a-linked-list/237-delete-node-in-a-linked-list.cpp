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
    void deleteNode(ListNode* node) {
        ListNode* next_node=node->next;
        int temp=node->val;
        node->val=next_node->val;
        next_node->val=temp;
        node->next=next_node->next;
        delete next_node;
    }
};