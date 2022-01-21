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
    TreeNode* solve(vector<int> &v, int start, int end,int &id){
        if(id>v.size() || start>end || start<0 || end>=v.size())
            return NULL;
        id++;
        int mid = (start+end)/2;
        TreeNode* new_root=  new TreeNode(v[mid]);
        new_root->left= solve(v, start, mid-1,id);
         new_root->right= solve(v, mid+1, end,id);
        return new_root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>v;
        
        while(head!= NULL){
            v.push_back(head->val);
            head=head->next;
        }
        int id=0;
        return solve(v, 0, v.size()-1,id);
    }
};