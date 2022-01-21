
class Solution {
public:
     TreeNode* solve(ListNode* head, ListNode* tail = NULL) {
        if (head == tail) 
            return NULL;
        
        ListNode* fast = head, *slow = head;
        while (fast != tail && fast->next != tail) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        TreeNode* root = new TreeNode(slow->val);
        root->left = solve(head, slow);
        root->right = solve(slow->next, tail);
        
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        return solve(head, NULL);
    }
};